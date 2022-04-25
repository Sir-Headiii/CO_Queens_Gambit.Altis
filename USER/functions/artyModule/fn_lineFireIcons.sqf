params ["_positions"];
_positions params ["_pos1", "_pos2"];

_pos1 set [2, (_pos1#2) + 1.5];
_pos2 set [2, (_pos2#2) + 1.5];

player setVariable ["GRAD_Arty_linePositions", [_pos1, _pos2]];

private _lineHandler = addMissionEventHandler ["Draw3D", {
	(player getVariable ["GRAD_Arty_linePositions", []]) params ["_pos1", "_pos2"];

	drawLine3D [_pos1, _pos2, [1,0,0,1]];		
	drawIcon3D ["\a3\UI_f\data\GUI\Cfg\CommunicationMenu\cas_ca.paa", [1,1,1,1], _pos1, 1, 1, 0];
	drawIcon3D ["\a3\UI_f\data\GUI\Cfg\CommunicationMenu\cas_ca.paa", [1,1,1,1], _pos2, 1, 1, 0];
}];


waitUntil { !(missionNamespace getVariable ["GRAD_Arty_lineFireInProgress", true]) };
removeMissionEventHandler ["Draw3D", _lineHandler];
player setVariable ["GRAD_Arty_linePositions", []];