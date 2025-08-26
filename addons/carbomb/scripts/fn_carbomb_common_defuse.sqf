_vehicle = _this select 0;
_bomb = _this select 1;
_vehicle setVariable ["Bomb", _bomb];
if (_bomb == "Defused" and hasInterface) then
{
	[_vehicle,0,["ACE_MainActions","defuseCarBomb"]] call ace_interact_menu_fnc_removeActionFromObject;
};
