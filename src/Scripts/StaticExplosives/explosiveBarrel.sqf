private["_logic","_units","_activated"];


_activated = _this param [2,true,[true]]; 

if (_activated) then {
	_this spawn {
        params ["_logic", "_units"];     

    _pos = getPosATL _logic;
	if !(isnull (attachedto _logic)) then {_pos = getposatl (attachedto _logic);};
	_dir = _logic getvariable ["dir",random 360];

    _ExploBar = "Land_MetalBarrel_F" createVehicle [0,0,0]; 
    _ExploBar setPosATL _pos;  

    _ExploBar addEventHandler ["HandleDamage",{0}];

	_ExploBar addMPEventHandler ["MPHit", {    params ["_unit", "_causedBy", "_damage", "_instigator"];
    if !(_instigator in allplayers) exitWith {false};
    private _hitCount = (_unit getVariable ["you_hitCount", 0])+1;
    _unit setVariable ["you_hitCount", _hitCount];

    if (_hitCount >1) then {
        _unit removeMPEventHandler ["MPHit", _thisEventHandler];        
        _unit spawn {
            private _emitter = "#particlesource" createVehicle position _this;
            _emitter setParticleClass "MediumDestructionFire";
            sleep ((round random 3) +3);

            sleep 0.1;
            if (isServer) then {
                "HelicopterExploSmall" createVehicle getPosATL _this;
            };
            sleep 0.1;
        
            {
            deleteVehicle _x;
            } forEach [_emitter, _this];
 
        }
    }
}];

    deleteVehicle _logic;

{
    _x addCuratorEditableObjects
    [
    entities [["Land_MetalBarrel_F"],["Logic"], true /* Include vehicle crew */,true /* Exclude dead bodies */],
    true
    ];
} count allCurators;

};
};
true