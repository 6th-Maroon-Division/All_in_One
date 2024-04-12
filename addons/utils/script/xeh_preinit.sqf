// Register a keybind to an action
#include "\a3\ui_f\hpp\defineDIKCodes.inc"

[
"breakWindow", 
"breakWindow", 
["Smash", "Press to smash a window"], 
{
execVM "\A6MD\All_in_One\addons\utils\script\breakWindow.sqf"
}, 
{}, 
[DIK, [false,false,false]]
] call cba_fnc_addKeybind;
