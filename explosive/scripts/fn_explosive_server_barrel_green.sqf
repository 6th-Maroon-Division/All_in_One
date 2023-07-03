private["_logic", "_unit", "_activated", "_ExploBar","_exploname","_pos","_dir"];
_logic=_this select 0;
_unit=_this select 1;
_activated=_this select 2;
_exploname=_this select 3;
sleep .1;
if!(isServer)exitWith{};
_activated = _this param [2, true, [true]];

if (_activated) then {
	_pos = getPosATL _logic;
	if !(isNull (attachedTo _logic)) then {
		_pos = getPosATL (attachedTo _logic);
	};
	_dir = _logic getvariable ["dir", random 360];

	_ExploBar = "Land_MetalBarrel_F" createVehicle [0, 0, 0];
	_ExploBar setVariable["explo", _exploname];
	_ExploBar setPosATL _pos;

	_ExploBar addEventHandler ["HandleDamage", {
		0
	}];
	sleep 1;
	_ExploBar addMPEventHandler ["MPHit", {
		private["_unit", "_causedBy", "_damage","_instigator"];
		params ["_unit", "_causedBy", "_damage", "_instigator"];
		if(_damage <= 0.1)exitWith{};
		_unit removeAllMPEventHandlers _thisEvent;
		[_unit] remoteExec ["A6MD_fnc_explosive_server_barrel", 2, false];
	}];

	deleteVehicle _logic;

	{
		_x addCuratorEditableObjects
		[
			    entities [["Land_MetalBarrel_F"], ["Logic"], true /* Include vehicle crew */, true /* Exclude dead bodies */], 
				    true
			    ];
		} count allCurators;
	};