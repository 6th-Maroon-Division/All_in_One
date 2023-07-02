private["_logic", "_units", "_activated"];
_logic=_this select 0;
_units=_this select 1;
_activated=_this select 2;
sleep .1;

if (_activated) then {
	_Nokia_Bomb = "Old_Nokia";

	_pos = getPosATL _logic;
	if !(isNull (attachedTo _logic)) then {
		_pos = getPosATL (attachedTo _logic);
	};
	_dir = _logic getvariable ["dir", random 360];

	_PhoneBomb = "Explosive" createVehicle [0, 0, 0];
	_PhoneBomb setPosATL _pos;

	sleep 0.1;

	_PhoneBomb say3D ["Old_Nokia", 25, 1, false, 0];
	_PhoneBomb hideObject true;

	{
		_x addCuratorEditableObjects
		[
			            entities [["Explosive"], ["Logic"], true /* Include vehicle crew */, true /* Exclude dead bodies */], 
				            true
			            ];
		} count allCurators;
		
		        sleep 9.5;
		
		        deleteVehicle _logic;
		sleep 0.1
		        if (isServer) then {
			_bomb = createVehicle ["IEDLandSmall_Remote_Ammo", _pos, [], 0, "CAN_COLLIDE"];
			            sleep 0.1;
			            _bomb setDamage 1;
			            _PhoneBomb setDamage 1;
		};
	};