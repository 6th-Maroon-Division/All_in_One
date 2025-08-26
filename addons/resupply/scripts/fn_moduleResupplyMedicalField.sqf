private["_logic", "_units", "_activated"];
_logic=_this select 0;
_units=_this select 1;
_activated=_this select 2;
sleep .1;
if!(isServer)exitWith{};
_activated = _this param [2, true, [true]];

if (_activated) then {
	_this spawn {
		params ["_logic", "_units"];
		_pos = getPos _logic;
		if !(isNull (attachedTo _logic)) then {
			_pos = getPosATL (attachedTo _logic);
		};
		_dir = _logic getvariable ["dir", random 360];
		_h = _pos param [2, 0];
		_h = _h + 110;
		_pos set [2, _h];
		_box = "ACE_medicalSupplyCrate" createVehicle [0, 0, 0];
		_box setPosATL _pos;

		sleep 0.4;

		parachute_1 = "B_parachute_02_f" createVehicle [0, 0, 0];
		parachute_1 setPosASL (getPosASL _box);
		_box attachTo [parachute_1, [0, 0, 0]];

		sleep 0.4;

		deleteVehicle _logic;
		_smoke = "SmokeShellOrange" createVehicle [0, 0, 0];
		_smoke attachTo [_box, [0, 0, 0]];

		sleep 2;

		clearItemCargoGlobal _box;
		clearWeaponCargoGlobal _box;
		clearMagazineCargoGlobal _box;

		sleep 2;

		{
			_box addItemCargoGlobal ["ACE_adenosine", 1];
			_box addItemCargoGlobal ["ACE_elasticBandage", 5];
			_box addItemCargoGlobal ["ACE_packingBandage", 5];
			_box addItemCargoGlobal ["ACE_quikclot", 5];
			_box addItemCargoGlobal ["ACE_bodybag", 1];
			_box addItemCargoGlobal ["ACE_bloodIV", 1];
			_box addItemCargoGlobal ["ACE_bloodIV_500", 2];
			_box addItemCargoGlobal ["ACE_bloodIV_250", 3];
			_box addItemCargoGlobal ["ACE_earplugs", 1];
			_box addItemCargoGlobal ["ACE_cableTie", 1];
			_box addItemCargoGlobal ["ACE_epinephrine", 2];
			_box addItemCargoGlobal ["ACE_morphine", 1];
			_box addItemCargoGlobal ["ACE_splint", 1];
			_box addItemCargoGlobal ["ACE_personalAidKit", 1];
			_box addItemCargoGlobal ["ACE_tourniquet", 1];
		} forEach allPlayers;

		deleteVehicle _logic;

		{
			_x addCuratorEditableObjects
			[
				entities [["ACE_medicalSupplyCrate"], ["Logic"], true /* Include vehicle crew */, true /* Exclude dead bodies */], 
					true
				];
			} count allCurators;
			
			sleep 30;
			_smoke2 = "SmokeShellOrange" createVehicle [0, 0, 0];  
			_smoke2 attachTo [_box, [0, 0, 0]];
		};
	};
