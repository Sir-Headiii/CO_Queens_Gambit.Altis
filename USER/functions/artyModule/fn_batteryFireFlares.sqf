params ["_position", "_arty", "_availableMagazines", "_ammoType1", "_ammoType2", "_ammoAmount1", "_ammoAmount2", "_spread", "_delay", "_randomDelay"];

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
	_pos set [2, 445];

	private _type = selectRandom _rounds;
	_rounds deleteAt (_rounds find _type);

	private _round = createVehicle [_type, _pos, [], 0, "NONE"];
	_round setPos _pos;
	[_round, -90, 0] call BIS_fnc_setPitchBank;
	[_round, [0, 0, -50]] remoteExec ["setVelocity", _round];

	if (_i isEqualTo _roundCount) exitWith {};

	if (_randomDelay) then {
		sleep (random _delay);
	} else {
		sleep _delay;
	};
};

sleep 9;
["End of Fire Mission", format["All %1 flares arrived", _ammoAmount1 + _ammoAmount2], 5] call BIS_fnc_curatorHint;