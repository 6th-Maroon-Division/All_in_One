#include "..\defines.hpp"

createDialog "6MD_Vehicle_Arsenal_Dialog";

// Example of adding items to the inventory list
private _inventoryCtrl = findDisplay IDC_MAIN_DIALOG displayCtrl IDC_INVENTORY_LIST;
_inventoryCtrl lbAdd "Item 1";
_inventoryCtrl lbAdd "Item 2";
_inventoryCtrl lbAdd "Item 3";