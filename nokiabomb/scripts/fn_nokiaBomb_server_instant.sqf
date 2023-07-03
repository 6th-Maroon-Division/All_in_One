private["_logic", "_pos", "_exploname", "_PhoneBomb", "_bomb"];
_logic=_this select 0;
_exploname=_this select 1;

_pos = getPosATL _logic;
deleteVehicle _logic;

_PhoneBomb = "Explosive" createVehicle _pos;
sleep 0.1;

_PhoneBomb say3D ["A6MD_nokiabomb_oldnokia", 25, 1, false, 0];
_PhoneBomb hideObject true;

{
	_x addCuratorEditableObjects[[_PhoneBomb], true];
} forEach allCurators;

sleep 9.5;
if(isNull _PhoneBomb)exitWith{};
deleteVehicle _PhoneBomb;
sleep 0.1;
_bomb = createVehicle ["IEDLandSmall_Remote_Ammo", _pos, [], 0, "CAN_COLLIDE"];

[[_bomb], 0] call ace_explosives_fnc_scriptedExplosive;