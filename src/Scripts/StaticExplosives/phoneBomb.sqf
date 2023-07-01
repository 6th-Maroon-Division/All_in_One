private["_logic","_units","_activated"];


_activated = _this param [2,true,[true]]; 

if (_activated) then {
	_this spawn {
        params ["_logic", "_units"];     
        _Nokia_Bomb = "Old_Nokia";

        _pos = getPosATL _logic;
	    if !(isnull (attachedto _logic)) then {_pos = getposatl (attachedto _logic);};
	    _dir = _logic getvariable ["dir",random 360];

        _PhoneBomb = "Explosive" createVehicle [0,0,0]; 
        _PhoneBomb setPosATL _pos;  

        sleep 0.1;

        _PhoneBomb say3D ["Old_Nokia", 25, 1, false, 0];
        _PhoneBomb hideObject true;

        {
            _x addCuratorEditableObjects
            [
            entities [["Explosive"],["Logic"], true /* Include vehicle crew */,true /* Exclude dead bodies */],
            true
            ];
        } count allCurators;

        sleep 9.5;

        if (isServer) then {
            _bomb = createVehicle ["IEDLandSmall_Remote_Ammo", _pos, [], 0, "CAN_COLLIDE"];
            sleep 0.1;
            _bomb setDamage 1;
            _PhoneBomb setDamage 1;
        };

        deleteVehicle _logic;

    };
};
true