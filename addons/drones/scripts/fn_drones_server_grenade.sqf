private["_logic", "_unit", "_activated", "_position", "_drone", "_grenades"];

_logic=_this select 0;
_units=_this select 1;
_activated=_this select 2;

_position = getPosATL _logic;
deleteVehicle _logic;
_grenades = [];
_drone = createVehicle ["B_UAV_01_F", _position, [], 0, "None"];
{
	private _gren= createSimpleObject ["A3\Weapons_f\ammo\Handgrenade", [0, 0, 0]];
	_gren attachTo [_drone, _x, "", true];
	_gren setVariable ["explo", "GrenadeHand", false];
	_gren setVariable ["offset", _x, false];
	_grenades pushBackUnique _gren;
} forEach [[0.1, 0.1, -0.02], [0.1, -0.1, -0.02], [-0.1, -0.1, -0.02], [-0.1, 0.1, -0.02]];
createVehicleCrew _drone;
_drone setVariable["grenades", _grenades, false];
createVehicleCrew _drone;
_drone addAction
[
	"<t color='#ff0000'>Drop</t>",
	{
		_this remoteExec ["A6MD_fnc_drones_server_grenade_action", 2, false];
	},
	nil,
	1.5,
	true,
	true,
	"",
	"(_this == currentPilot vehicle _target) || (_this == gunner vehicle _target)",
	1
];
_drone addMPEventHandler ["MPHit", {
	private["_unit", "_causedBy", "_damage", "_instigator"];
	params ["_unit", "_causedBy", "_damage", "_instigator"];
	if (_damage <= 0.1) exitWith {};
	_unit removeAllMPEventHandlers _thisEvent;
	[_unit] remoteExec ["A6MD_fnc_drones_server_grenade_hit", 2, false];
}];

{
	_x addCuratorEditableObjects[[_drone], true];
} forEach allCurators;
