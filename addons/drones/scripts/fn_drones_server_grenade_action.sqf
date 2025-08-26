
private ["_target", "_caller", "_actionId", "_arguments","_droneVelocity","_grenadeType","_pos","_gren","_magazine","_sgren","_offset"];
params ["_target", "_caller", "_actionId", "_arguments"];
_magazine = _target getVariable ["grenades",[]];
if !(count _magazine == 0) then {
	_droneVelocity = velocity _target;
	_grenadeType = _target getVariable ["explo","GrenadeHand"];
	_offset = _target getVariable ["offset",[0,0,-2]];
	_pos = _target modelToWorld _offset;
	_sgren = _magazine deleteAt 0;
	detach _sgren;
	deleteVehicle _sgren;
	_target setVariable["grenades",_magazine,false];
	_gren = _grenadeType createVehicle _pos;
	_gren setVectorDirAndUp [[0, 0, -1], [0.1, 0.1, 1]];
	_gren setVelocity [_droneVelocity select 0, _droneVelocity select 1, (_droneVelocity select 2) - 1];
}
else
{
	[_target,_actionId] remoteExec ["A6MD_fnc_drones_server_grenade_action_rem",0,false];
};
