#include "..\defines.hpp"

params ["_imagePath", "_action", "_index"];

_display = findDisplay IDC_MAIN_DIALOG;

private _yPos = 0.15 + (0.07 * _index); // Adjust position based on index

_ctrl = _display ctrlCreate ["RscPicture", -1];
_ctrl ctrlSetPosition [0.1, _yPos, "0.05 * safezoneW", "0.05 * safezoneH"];
_ctrl ctrlSetText _imagePath;
_ctrl buttonSetAction _action;
_ctrl ctrlCommit 0;