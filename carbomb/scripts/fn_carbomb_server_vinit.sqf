params["_vehicle","_sleepTime","_size"];

switch(_size) do
{
    case "big":
    {
        [_vehicle,"Bo_GBU12_LGB_MI10"] remoteExec ["A6MD_fnc_carbomb_common_defuse",0];
    };

    case "medium":
    {
        [_vehicle,"IEDUrbanBig_Remote_Ammo"] remoteExec ["A6MD_fnc_carbomb_common_defuse",0];
    };
    case "small":
    {
        [_vehicle,"HelicopterExploSmall"] remoteExec ["A6MD_fnc_carbomb_common_defuse",0];
    };
};

_vehicle setVariable ["Timer", _sleepTime];

_ehId = _vehicle addEventHandler ["Engine",{
    params["_vehicle","_status"];
    [_vehicle,_status] spawn {
        params["_vehicle","_status"];
        if(_status)then{
            _sleepTime = _vehicle getVariable "Timer";
            sleep _sleepTime;
            _bomb = _vehicle getVariable "Bomb";
            _explosion = _bomb createVehicle position _vehicle;
            _explosion setDamage 1;
            _vehicle removeAllEventHandlers "Engine";
        };
    };
}];
