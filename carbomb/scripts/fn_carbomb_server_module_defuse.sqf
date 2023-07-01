_vehicle = _this select 0;
_vehicle removeAllEventHandlers "Engine";
_vehicle setVariable ["Bomb", "Defused"];
[_vehicle, "Defused"] remoteExec ["A6MD_fnc_carbomb_common_defuse", -2, true];