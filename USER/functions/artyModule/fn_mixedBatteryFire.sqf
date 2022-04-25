params ["_position", "_arty", "_availableMagazines", "_ammoType1", "_ammoType2", "_ammoAmount1", "_ammoAmount2", "_spread", "_delay", "_randomDelay", "_eta"];

if (_eta) then {
	private _availableArty = [];
	{
		private _mags = getArtilleryAmmo [_x];
		private _ammo = _mags apply { getText (configfile >> "CfgMagazines" >> _x >> "ammo") };
		if ((_ammoType1 in _ammo) || (_ammoType2 in _ammo)) then {
			_availableArty pushBackUnique _x;
		};
	} forEach _arty;

	private _chosenArty = selectRandom _availableArty;
	private _time = _chosenArty getArtilleryETA [_position, selectRandom (getArtilleryAmmo [_chosenArty])];

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

private _roundCount = count _rounds;

for "_i" from 1 to _roundCount do {
	private _pos = [_position, _spread] call BIS_fnc_randomPosTrigger;
	_pos set [2, 1500];

	private _type = selectRandom _rounds;
	_rounds deleteAt (_rounds find _type);

	private _round = createVehicle [_type, _pos, [], 0, "NONE"];
	_round setPos _pos;
	[_round, -90, 0] call BIS_fnc_setPitchBank;
	[_round, [0, 0, -150]] remoteExec ["setVelocity", _round];

	if (_i isEqualTo _roundCount) exitWith {};

	if (_randomDelay) then {
		sleep (random _delay);
	} else {
		sleep _delay;
	};
};

sleep 9;
["End of Fire Mission", format["All %1 rounds impacted", _ammoAmount1 + _ammoAmount2], 5] call BIS_fnc_curatorHint;