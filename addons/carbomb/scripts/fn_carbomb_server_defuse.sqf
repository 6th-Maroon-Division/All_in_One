_vehicle = _this select 0;
_c4Pos = _this select 1;
_cutterPos = _this select 2;
_cutterrot = _this select 3;

_vehicle removeAllEventHandlers "Engine";
_vehicle setVariable ["Bomb", "Defused"];
[_vehicle, "Defused"] remoteExec ["A6MD_fnc_carbomb_common_defuse", -2, true];
_holder = createVehicle ["GroundWeaponHolder", _c4Pos, [], 0, "CAN_COLLIDE"];
_cutter = createVehicle ["Land_Pliers_F", _cutterPos, [], 0, "CAN_COLLIDE"];
_cutter setDir (_cutterrot + 120);
_holder addMagazineCargoGlobal ["DemoCharge_Remote_Mag", 1];
