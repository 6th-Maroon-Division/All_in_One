_vehicle = _this select 0;

player playMove "Acts_carFixingWheel";

[17, [player,_vehicle], {
	_args = _this select 0;
	_player = _args select 0;
	_vehicle = _args select 1;


	hint "IED removed";

	_c4Pos = _player modelToWorld [0,1.3,0];
	_cutterPos = _player modelToWorld [-0.3,1.3,0];
	[_vehicle,_c4Pos,_cutterPos,getDir _player] remoteExec ["A6MD_fnc_carbomb_server_defuse",2,false];

}, {

	_args = _this select 0;
	_player = _args select 0;
	_car = _args select 1;

	player switchMove "";
}, format["Disarming IED"]] call ace_common_fnc_progressBar;
