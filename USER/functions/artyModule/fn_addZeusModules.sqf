["GRAD Artillery", "Battery Fire", {
    params ["_position", "_object"];

	private _potArty = allMissionObjects "LandVehicle" select { alive _x };
	if (_potArty isEqualTo []) exitWith {
		["Failed to start Fire Mission", "No Land-Vehicles could be found!", 5] call BIS_fnc_curatorHint;
	};

	private _actualArty = [];
	{
		private _type = typeOf _x;
		if (getNumber (configFile >> "CfgVehicles" >> _type >> "artilleryScanner") == 1) then {
			_actualArty pushBackUnique _x;
		};
	} foreach _potArty;

	if (_actualArty isEqualTo []) exitWith {
		["Failed to start Fire Mission", "No Artillery-Units could be found!", 5] call BIS_fnc_curatorHint;
	};

	private _availableMagazines = getArtilleryAmmo _potArty;
	private _ammo = _availableMagazines apply { getText (configfile >> "CfgMagazines" >> _x >> "ammo") };
	private _ammoNames = _availableMagazines apply { getText (configfile >> "CfgMagazines" >> _x >> "displayName") };
	private _indicesToDelete = [];

	{
		private _name = toLower _x;
		private _hasFlare = _name find "flare";
		private _hasIllum = _name find "illum";
		private _hasGuided = _name find "guided";
		if (_hasFlare isNotEqualTo -1) then {
			_indicesToDelete pushBackUnique _foreachIndex;
		};
		if (_hasIllum isNotEqualTo -1) then {
			_indicesToDelete pushBackUnique _foreachIndex;
		};
		if (_hasGuided isNotEqualTo -1) then {
			_indicesToDelete pushBackUnique _foreachIndex;
		};		
	} forEach _ammoNames;
	
	{
		_ammo deleteAt _x;
		_ammoNames deleteAt _x;		
	} forEach _indicesToDelete;
	missionNamespace setVariable ["GRAD_Arty_ammoTypes", _ammo];
	missionNamespace setVariable ["GRAD_Arty_ammoPrettyNames", _ammoNames];


	["Mixed Battery Fire ", [
		[
			"COMBO",
			["Ammo Type 1", "First Ammunition that will be spawned"],
			[
				missionNamespace getVariable ["GRAD_Arty_ammoTypes", []],
				missionNamespace getVariable ["GRAD_Arty_ammoPrettyNames", []],
				0
			],
			true
		],
		[
			"COMBO",
			["Ammo Type 2", "Second Ammunition that will be spawned"],
			[
				missionNamespace getVariable ["GRAD_Arty_ammoTypes", []],
				missionNamespace getVariable ["GRAD_Arty_ammoPrettyNames", []],
				0
			],
			true
		],		
		[
			"SLIDER",
			["Amount Type 1", "Amount of Type 1 Ammuniton"],
			[0, 100, 5, 0],
			true
		],
		[
			"SLIDER",
			["Amount Type 2", "Amount of Type 2 Ammuniton"],
			[0, 100, 5, 0],
			true
		],		
		[
			"SLIDER",
			["Spread", "Controls the spread, in meters"],
			[0, 1000, 15, 0],
			true
		],
		[
			"SLIDER",
			["Delay", "Controls the delay between impacts, in seconds"],
			[0, 30, 1, 1],
			true
		],		
		[
			"CHECKBOX",
			["Randomize Delay", "Randomizes the delay, with a maximum of the above selected value"],
			false,
			true
		],
		[
			"CHECKBOX",
			["Consider ETA", "If checked, spawns the Ammunition after an initial delay, which would be the ETA when fired from an actual artillery-piece."],
			false,
			true
		]		

	], {
		params ["_dialogValues", "_args"];
		_args params ["_ammo", "_position", "_actualArty", "_availableMagazines"];

		_dialogValues params ["_ammoType1",	"_ammoType2", "_ammoAmount1", "_ammoAmount2", "_spread", "_delay", "_randomDelay", "_eta"];

		[_position, _actualArty, _availableMagazines, _ammoType1, _ammoType2, _ammoAmount1, _ammoAmount2, _spread, _delay, _randomDelay, _eta] spawn GRAD_Arty_fnc_mixedBatteryFire;
	}, {}, [_ammo, _position, _actualArty, _availableMagazines]] call zen_dialog_fnc_create;

}] call zen_custom_modules_fnc_register;




["GRAD Artillery", "Line Fire", {
     params ["_position", "_object"];

	private _potArty = allMissionObjects "LandVehicle" select { alive _x };
	if (_potArty isEqualTo []) exitWith {
		["Failed to start Fire Mission", "No Land-Vehicles could be found!", 5] call BIS_fnc_curatorHint;
	};

	private _actualArty = [];
	{
		private _type = typeOf _x;
		if (getNumber (configFile >> "CfgVehicles" >> _type >> "artilleryScanner") == 1) then {
			_actualArty pushBackUnique _x;
		};
	} foreach _potArty;

	if (_actualArty isEqualTo []) exitWith {
		["Failed to start Fire Mission", "No Artillery-Units could be found!", 5] call BIS_fnc_curatorHint;
	};

	private _availableMagazines = getArtilleryAmmo _potArty;
	private _ammo = _availableMagazines apply { getText (configfile >> "CfgMagazines" >> _x >> "ammo") };
	private _ammoNames = _availableMagazines apply { getText (configfile >> "CfgMagazines" >> _x >> "displayName") };
	private _indicesToDelete = [];

	{
		private _name = toLower _x;
		private _hasFlare = _name find "flare";
		private _hasIllum = _name find "illum";
		private _hasGuided = _name find "guided";
		if (_hasFlare isNotEqualTo -1) then {
			_indicesToDelete pushBackUnique _foreachIndex;
		};
		if (_hasIllum isNotEqualTo -1) then {
			_indicesToDelete pushBackUnique _foreachIndex;
		};
		if (_hasGuided isNotEqualTo -1) then {
			_indicesToDelete pushBackUnique _foreachIndex;
		};		
	} forEach _ammoNames;
	
	{
		_ammo deleteAt _x;
		_ammoNames deleteAt _x;		
	} forEach _indicesToDelete;
	missionNamespace setVariable ["GRAD_Arty_ammoTypes", _ammo];
	missionNamespace setVariable ["GRAD_Arty_ammoPrettyNames", _ammoNames];	


	["Line Fire ", [
		[
			"COMBO",
			["Ammo Type 1", "First Ammunition that will be spawned"],
			[
				missionNamespace getVariable ["GRAD_Arty_ammoTypes", []],
				missionNamespace getVariable ["GRAD_Arty_ammoPrettyNames", []],
				0
			],
			true
		],
		[
			"COMBO",
			["Ammo Type 2", "Second Ammunition that will be spawned"],
			[
				missionNamespace getVariable ["GRAD_Arty_ammoTypes", []],
				missionNamespace getVariable ["GRAD_Arty_ammoPrettyNames", []],
				0
			],
			true
		],		
		[
			"SLIDER",
			["Amount Type 1", "Amount of Type 1 Ammuniton"],
			[0, 100, 5, 0],
			true
		],
		[
			"SLIDER",
			["Amount Type 2", "Amount of Type 2 Ammuniton"],
			[0, 100, 5, 0],
			true
		],		
		[
			"SLIDER",
			["Spread", "Controls the spread, in meters"],
			[0, 100, 10, 0],
			true
		],
		[
			"SLIDER",
			["Delay", "Controls the delay between impacts, in seconds"],
			[0, 30, 1, 1],
			true
		],		
		[
			"CHECKBOX",
			["Randomize Delay", "Randomizes the delay, with a maximum of the above selected value"],
			false,
			true
		],
		[
			"CHECKBOX",
			["Consider ETA", "If checked, spawns the Ammunition after an initial delay, which would be the ETA when fired from an actual artillery-piece."],
			false,
			true
		]		

	], {
		params ["_dialogValues", "_args"];
		_args params ["_ammo", "_position", "_actualArty", "_availableMagazines"];

		_dialogValues params ["_ammoType1",	"_ammoType2", "_ammoAmount1", "_ammoAmount2", "_spread", "_delay", "_randomDelay", "_eta"];

		[_actualArty, _availableMagazines, _ammoType1, _ammoType2, _ammoAmount1, _ammoAmount2, _spread, _delay, _randomDelay, _eta] spawn GRAD_Arty_fnc_lineFire;
	}, {}, [_ammo, _position, _actualArty, _availableMagazines]] call zen_dialog_fnc_create;

}] call zen_custom_modules_fnc_register;



["GRAD Artillery", "Battery Flares", {
     params ["_position", "_object"];

	private _potArty = allMissionObjects "LandVehicle" select { alive _x };
	if (_potArty isEqualTo []) exitWith {
		["Failed to start Fire Mission", "No Land-Vehicles could be found!", 5] call BIS_fnc_curatorHint;
	};

	private _actualArty = [];
	{
		private _type = typeOf _x;
		if (getNumber (configFile >> "CfgVehicles" >> _type >> "artilleryScanner") == 1) then {
			_actualArty pushBackUnique _x;
		};
	} foreach _potArty;

	if (_actualArty isEqualTo []) exitWith {
		["Failed to start Fire Mission", "No Artillery-Units could be found!", 5] call BIS_fnc_curatorHint;
	};

	private _availableMagazines = getArtilleryAmmo _potArty;
	private _ammo = ["F_40mm_White", "F_40mm_Green", "F_40mm_Red", "F_40mm_Yellow", "rhs_ammo_m485_ilum", "rhs_ammo_3WS23"];
	private _ammoNames = ["Flare Round (White)", "Flare Round (Green)", "Flare Round (Red)", "Flare Round (Yellow)", "Illumination", "3VS-23 Flare"];

	missionNamespace setVariable ["GRAD_Arty_ammoTypes", _ammo];
	missionNamespace setVariable ["GRAD_Arty_ammoPrettyNames", _ammoNames];


	["Flare Fire ", [
		[
			"COMBO",
			["Ammo Type 1", "First Ammunition that will be spawned"],
			[
				missionNamespace getVariable ["GRAD_Arty_ammoTypes", []],
				missionNamespace getVariable ["GRAD_Arty_ammoPrettyNames", []],
				0
			],
			true
		],
		[
			"COMBO",
			["Ammo Type 2", "Second Ammunition that will be spawned"],
			[
				missionNamespace getVariable ["GRAD_Arty_ammoTypes", []],
				missionNamespace getVariable ["GRAD_Arty_ammoPrettyNames", []],
				0
			],
			true
		],		
		[
			"SLIDER",
			["Amount Type 1", "Amount of Type 1 Ammuniton"],
			[0, 100, 5, 0],
			true
		],
		[
			"SLIDER",
			["Amount Type 2", "Amount of Type 2 Ammuniton"],
			[0, 100, 5, 0],
			true
		],		
		[
			"SLIDER",
			["Spread", "Controls the spread, in meters"],
			[0, 1000, 15, 0],
			true
		],
		[
			"SLIDER",
			["Delay", "Controls the delay between impacts, in seconds"],
			[0, 55, 1, 1],
			true
		],		
		[
			"CHECKBOX",
			["Randomize Delay", "Randomizes the delay, with a maximum of the above selected value"],
			false,
			true
		]
	], {
		params ["_dialogValues", "_args"];
		_args params ["_ammo", "_position", "_actualArty", "_availableMagazines"];

		_dialogValues params ["_ammoType1",	"_ammoType2", "_ammoAmount1", "_ammoAmount2", "_spread", "_delay", "_randomDelay"];

		[_position, _actualArty, _availableMagazines, _ammoType1, _ammoType2, _ammoAmount1, _ammoAmount2, _spread, _delay, _randomDelay] spawn GRAD_Arty_fnc_batteryFireFlares;
	}, {}, [_ammo, _position, _actualArty, _availableMagazines]] call zen_dialog_fnc_create;
}] call zen_custom_modules_fnc_register;