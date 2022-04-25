params ["_actualArty", "_availableMagazines", "_ammoType1", "_ammoType2", "_ammoAmount1", "_ammoAmount2", "_spread", "_delay", "_randomDelay", "_eta"];

if (missionNamespace getVariable ["GRAD_Arty_lineFireInProgress", false]) exitWith {  };
missionNamespace setVariable ["GRAD_Arty_lineFireInProgress", true, true];

private _display = findDisplay 312;
private _ctrl = _display displayCtrl 53;

private _ctrlHandler = _ctrl ctrlAddEventHandler ["MouseButtonDblClick", {
	params ["_control", "_button", "_xPos", "_yPos", "_shift", "_ctrl", "_alt"];
	private _pointsSet = player getVariable ["GRAD_Arty_linePositionAmount", 0];
	if (_pointsSet < 2) then {
		private _pos = screenToWorld [_xPos, _yPos];
		_pos set [2, (_pos#2) + 2];
		private _posArray = player getVariable ["GRAD_Arty_linePositions", []];
		_posArray pushBack _pos;
		player setVariable ["GRAD_Arty_linePositions", _posArray];
		player setVariable ["GRAD_Arty_linePositionAmount", _pointsSet + 1];
		["Line Fire", format["Position %1 set!", _pointsSet + 1], 5] call BIS_fnc_curatorHint;
	};
}];

["Line Fire", "Double-Click on the screen, to mark the 2 positions that build the 'Fire-Line'", 5] call BIS_fnc_curatorHint;

waitUntil { (player getVariable ["GRAD_Arty_linePositionAmount", 0]) >= 2 };

_ctrl ctrlRemoveAllEventHandlers "MouseButtonDblClick";
player setVariable ["GRAD_Arty_linePositionAmount", 0];
private _positions = player getVariable ["GRAD_Arty_linePositions", []];
player setVariable ["GRAD_Arty_linePositions", []];

private _allCurators = [];
{
	_allCurators pushBackUnique (getAssignedCuratorUnit _x);     
} forEach allCurators;

[_positions] remoteExec ["GRAD_Arty_fnc_lineFireIcons", _allCurators];


if (_eta) then {
	private _availableArty = [];
	{
		private _mags = getArtilleryAmmo [_x];
		private _ammo = _mags apply { getText (configfile >> "CfgMagazines" >> _x >> "ammo") };
		if ((_ammoType1 in _ammo) || (_ammoType2 in _ammo)) then {
			_availableArty pushBackUnique _x;
		};
	} forEach _actualArty;

	private _chosenArty = selectRandom _availableArty;
	private _time = _chosenArty getArtilleryETA [_positions # 0, selectRandom (getArtilleryAmmo [_chosenArty])];

	private _initialCountDown = [_time + 8] call BIS_fnc_countDown;
	private _handle = 
	[
		{
			params ["_args", "_handle"];
			
			if !([true] call BIS_fnc_countDown) exitWith {
				[_handle] call CBA_fnc_removePerFrameHandler;
				["Splash in:", "00:00.000", 0] call BIS_fnc_curatorHint;
			};

			["Splash in:", format["%1", [[0] call BIS_fnc_countdown,"MM:SS.MS"] call BIS_fnc_secondsToString], 0] call BIS_fnc_curatorHint;
		},
		0,
		[]
	] call CBA_fnc_addPerFrameHandler;

	sleep _time;
};

private _rounds = [];
for "_i" from 1 to _ammoAmount1 do {
	_rounds pushBack _ammoType1;
};
for "_i" from 1 to _ammoAmount2 do {
	_rounds pushBack _ammoType2;
};

_positions params ["_pos1", "_pos2"];
private _pointDistance = _pos1 distance2D _pos2;

private _iterations = ceil (_pointDistance / (_ammoAmount1 + _ammoAmount2));
// systemChat format["Distance: %1 | Spacing: %2 | Iterations: %3", _pointDistance, SMOKE_SPACING, _iterations];
private _vectorNormalized = vectorNormalized (_pos1 vectorFromTo _pos2);
private _shellPos = _pos1;
private _totalSleepTime = 0;

private _roundCount = count _rounds;

for "_i" from 1 to _roundCount do {
	_spawnPos = [[[_shellPos, _spread]]] call BIS_fnc_randomPos;
	_spawnPos set [2, 1500];
	private _type = selectRandom _rounds;
	_rounds deleteAt (_rounds find _type);	
	private _round = createVehicle [_type, _spawnPos, [], 0, "NONE"];
	_round setPos _spawnPos;
	[_round, -90, 0] call BIS_fnc_setPitchBank;
	[_round, [0, 0, -150]] remoteExec ["setVelocity", _round];

	_shellPos = _shellPos vectorAdd (_vectorNormalized vectorMultiply _iterations);

	if (_i isEqualTo _roundCount) exitWith {};

	if (_randomDelay) then {
		sleep (random _delay);
	} else {
		sleep _delay;
	};
};

sleep 9;
["End of Fire Mission", format["All %1 rounds impacted", _ammoAmount1 + _ammoAmount2], 5] call BIS_fnc_curatorHint;

missionNamespace setVariable ["GRAD_Arty_lineFireInProgress", false, true];