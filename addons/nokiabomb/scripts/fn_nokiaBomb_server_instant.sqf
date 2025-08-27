// Run this on server side
params ["_logic", "_exploname"];

private _pos = getPosATL _logic;
deleteVehicle _logic;

// Spawn phone prop
private _PhoneBomb = "Land_MobilePhone_old_F" createVehicle _pos;
_PhoneBomb setPosATL _pos;
_PhoneBomb setVectorUp surfaceNormal _pos;

// Play ringtone globally
[_PhoneBomb, ["A6MD_nokiabomb_oldnokia", 25, 1, false, 0]] remoteExec ["say3D", 0, true];

// Hide the phone model (but keep variable)
hideObjectGlobal _PhoneBomb;

// Add Zeus editability
{
    _x addCuratorEditableObjects [[_PhoneBomb], true];
} forEach allCurators;

// Wait, then replace with explosive
sleep 9.5;
if (isNull _PhoneBomb) exitWith {};

private _swapPos = getPosATL _PhoneBomb;
deleteVehicle _PhoneBomb;

sleep 0.1;

// Spawn actual explosive
private _bomb = createVehicle [_exploname, _swapPos, [], 0, "CAN_COLLIDE"];
_bomb setVectorUp surfaceNormal _swapPos;

// (Optional) Zeus editability
{
    _x addCuratorEditableObjects [[_bomb], true];
} forEach allCurators;

// Arm it with ACE
[_bomb] call ace_explosives_fnc_scriptedExplosive;
