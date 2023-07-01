private["_logic","_units","_activated"];

_activated = _this param [2,true,[true]]; 

	if (_activated) then {
		_this spawn {
  			params ["_logic", "_units"];     
  			_pos = getPos _logic;
			if !(isnull (attachedto _logic)) then {_pos = getposatl (attachedto _logic);};
			_dir = _logic getvariable ["dir",random 360];
  	  		_h = _pos param [2,0]; 
  	  		_h = _h + 110; 
  	  		_pos set [2, _h]; 
  	  		_box = "B_CargoNet_01_ammo_F" createVehicle [0,0,0]; 
  	  		_box setPosATL _pos;  
 
			sleep 0.4;

    		parachute_1 = "B_parachute_02_f" createVehicle [0,0,0]; 
   			parachute_1 setPosASL (getPosASL _box); 
   			_box attachTo [parachute_1, [0,0,0]]; 
 
			sleep 0.4;

			deleteVehicle _logic;
  		    _smoke = "SmokeShellOrange" createVehicle [0,0,0]; 
		    _smoke attachTo [_box, [0,0,0]];

			sleep 2;

    		clearItemCargoGlobal _box; 
    		clearWeaponCargoGlobal _box; 
    		clearMagazineCargoGlobal _box; 
 
			sleep 2;

			{ 
				_box addMagazineCargoGlobal [primaryWeaponMagazine _x select 0, 8];
				_box addMagazineCargoGlobal [handgunMagazine _x select 0, 4];
				_box addMagazineCargoGlobal [primaryWeaponMagazine _x select 1, 10]; 
				_box addMagazineCargoGlobal [secondaryWeaponMagazine _x select 0, 4];   
			} forEach allPlayers; 
				_box addWeaponCargoGlobal ["CUP_launch_M136",5];
		deleteVehicle _logic;

			{
				_x addCuratorEditableObjects
				[
					entities [["B_CargoNet_01_ammo_F"],["Logic"], true /* Include vehicle crew */,true /* Exclude dead bodies */],
					true
				];
			} count allCurators;

		sleep 30;
		_smoke2 = "SmokeShellOrange" createVehicle [0,0,0];  
		_smoke2 attachTo [_box, [0,0,0]]; 
		};

	};
	
	true

