private["_unit", "_pos","_explosion","_grenadeType","_grenades","_sgren","_gren","_offset"];

_unit = _this select 0;
_grenades = _unit getVariable ["grenades",[]];
{
	_grenadeType = _unit getVariable ["explo","GrenadeHand"];
	if (_grenadeType == "GrenadeHand") then {_grenadeType = "A6MD_Drone_Grenade_Impact";};
	_offset = _x getVariable ["offset",[0,0,-2]];
	_pos = _unit modelToWorld _offset;
	detach _x;
	deleteVehicle _x;
	_gren = _grenadeType createVehicle _pos;
	[[_gren], 0] call ace_explosives_fnc_scriptedExplosive;
	
} forEach _grenades;