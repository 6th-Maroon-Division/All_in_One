_id = remoteExecutedOwner;

if (_id isEqualTo 0) exitWith {};
_car = _this select 0;
_player = _this select 1;
_ret = false;
if (_car getVariable ["Bomb", "Defused"] != "Defused") then
{
	_ret = true;
};
[_car, _player, _ret]remoteExec ["A6MD_fnc_carbomb_client_examine",_id];
