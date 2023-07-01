_car = _this select 0;
_player = _this select 1;
_bomb = _this select 2;

player playMove "Acts_carFixingWheel";

[17, [_player,_car,_bomb],
{

    _args = _this select 0;
    _player = _args select 0;
    _car = _args select 1;
	_bomb = _args select 2;

    hint "Nothing suspicious found.";
    if( _bomb == true) then
    {
        hint "You found a IED attached under the car.";
        _action = ["defuseCarBomb","Disarm IED","",{[_target] call A6MD_fnc_carbomb_client_defuse;},{_target getVariable ['Bomb', "Defused"] != "Defused"},{},[parameters], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
        [_car, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
    }
    else
    {
        hint "Nothing suspicious found.";
    };

},

{

    _args = _this select 0;
    _player = _args select 0;
    _car = _args select 1;

    _player switchmove "";
}, format["Examining %1", getText ( configfile >> "CfgVehicles" >> typeOf _car >> "displayName")]] call ace_common_fnc_progressBar;
