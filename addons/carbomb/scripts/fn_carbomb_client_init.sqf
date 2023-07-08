if!(hasInterface)exitWith{};
_action = ["Examine", "Examine vehicle", "", {[_target,_player] remoteExec ["A6MD_fnc_carbomb_server_examine",2];}, {true}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;