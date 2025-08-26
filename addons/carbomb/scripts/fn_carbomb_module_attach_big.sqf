_logic = _this select 0;
_activated = _this select 2;
if (_activated && local _logic) then {
	_unit = _logic getvariable ["bis_fnc_curatorAttachObject_object",objnull];

	//--- Check if the unit is suitable
	_error = "";
	switch true do {
		case (isnull _unit): {_error = "No Land vehicle selected";};
		case !(alive _unit): {_error = "Land vehicle is destroyed";};
		case !(_unit isKindOf "LandVehicle"): {_error = "not a Land Vehicle";};
	};

	if (_error == "") then {
		[_unit,1,"big"] remoteExec ["A6MD_fnc_carbomb_server_vinit",2];
	} else {
		[objnull,_error] call bis_fnc_showCuratorFeedbackMessage;
	};
	deletevehicle _logic;
};
