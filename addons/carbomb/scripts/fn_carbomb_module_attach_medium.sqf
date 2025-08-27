_logic = _this select 0;
_activated = _this select 2;
if (_activated && local _logic) then {
	_unit = _logic getVariable ["bis_fnc_curatorAttachObject_object",objNull];

	//--- Check if the unit is suitable
	_error = "";
	switch true do {
		case (isNull _unit): {_error = "No Land vehicle selected";};
		case !(alive _unit): {_error = "Land vehicle is destroyed";};
		case !(_unit isKindOf "LandVehicle"): {_error = "not a Land Vehicle";};
	};

	if (_error == "") then {
		[_unit,1,"medium"] remoteExec ["A6MD_fnc_carbomb_server_vinit",2];
	} else {
		[objNull,_error] call bis_fnc_showCuratorFeedbackMessage;
	};
	deleteVehicle _logic;
};
