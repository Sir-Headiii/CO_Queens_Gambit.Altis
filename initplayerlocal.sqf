params ["_player", "_didJIP"];

if (didJIP) then {
    [player] remoteExec ["grad_common_fnc_addJipToZeus",2,false];
};

["InitializePlayer", [player,true]] call BIS_fnc_dynamicGroups;
grad_template_ratingEH = player addEventHandler ["HandleRating",{0}];

if (_didJiP || didJiP) exitWith {};
// sleep 5;
// playMusic ["russia", 0];

cutText ["", "BLACK FADED"];
