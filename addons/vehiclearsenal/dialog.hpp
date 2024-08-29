#include "defines.hpp"

class RscText
{
    access = 0;
    type = 0;
    idc = -1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    text = "";
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0.037;
    w = 0.3;
    style = 0;
    shadow = 1;
    font = "PuristaMedium";
    SizeEx = 0.03921;
};

class RscButton
{
    access = 0;
    type = 1;
    text = "";
    colorText[] = {1,1,1,1};
    colorDisabled[] = {0.4,0.4,0.4,1};
    colorBackground[] = {0,0,0,0.8};
    colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
    colorBackgroundActive[] = {0.2,0.2,0.2,1};
    colorFocused[] = {0,0,0,0.8};
    colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,1};
    soundEnter[] = {"",0.09,1};
    soundPush[] = {"",0.09,1};
    soundClick[] = {"",0.09,1};
    soundEscape[] = {"",0.09,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.03921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};

class RscPicture
{
    access = 0;
    idc = -1;
    type = 0;
    style = 48;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = "PuristaMedium";
    sizeEx = 0.023;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;
};

class RscButtonArsenal;

class RscListNBox;
class ctrlButton;

class 6MD_Vehicle_Arsenal_Dialog
{
    idd = IDC_MAIN_DIALOG;
    movingEnable = false;
    enableSimulation = true;
    
    class controlsBackground
    {
        class UIBackground: RscText
        {
            idc = -1;
            colorBackground[] = {0.25, 0.25, 0.25, 0.95}; // Semi-transparent black
            x = "0";
            y = "0";
            w = "1";
            h = "1"; // Fullscreen background
        };
        class ItemsLeftBackground: RscText
        {
            idc = -1;
            colorBackground[] = {0.15, 0.15, 0.15, 0.95}; // Semi-transparent black
            x = "0.09";
            y = "0.05";
            w = "0.44";
            h = "0.87";
        };
        class ItemsRightBackground: RscText
        {
            idc = -1;
            colorBackground[] = {0.15, 0.15, 0.15, 0.95}; // Semi-transparent black
            x = "0.545";
            y = "0.05";
            w = "0.44";
            h = "0.87";
        };
    };
    
    class controls
    {
        
        class ArrowLeft: ctrlButton {
            idc = IDC_arrowMinus;
            text = "-";
            colorBackground[] = {0,0,0,0.8};
            fade = 1;
            enable = 0;
            x = 0.5;
            y = 0.5;
            w = "1 * SafeZoneW";
            h = "1 * SafeZoneH";
        };
        class ArrowRight: ArrowLeft {
            idc = IDC_arrowPlus;
            text = "+";
        };
        class Title: RscText
        {
            idc = IDC_LABEL_TITLE;
            text = "6MD Vehicle Arsenal";
            x = "0.007";
            y = "0.01";
            w = "0.3";
            h = "0.03";
        };
        
        class ButtonWeapons: RscButtonArsenal
        {
            idc = IDC_BUTTON_WEAPONS;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\PrimaryWeapon_ca.paa"; // Path to your weapons icon image
            x = "0.008";
            y = "0.05";
            w = "0.075";
            h = "0.1"; 
        };
        
        class ButtonMedic: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.008";
            y = "0.155";
            w = "0.075";
            h = "0.1"; 
        };
        
        class ButtonClothing: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.008";
            y = "0.26";
            w = "0.075";
            h = "0.1"; 
        };
        
        class ButtonAmmo: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.008";
            y = "0.365";
            w = "0.075";
            h = "0.1"; 
        };
        
        class ButtonExplosiv: RscButtonArsenal
        {
            idc = -1;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.008";
            y = "0.37";
            w = "0.075";
            h = "0.1"; 
        };
        
        class ButtonMisc: RscButtonArsenal
        {
            idc = IDC_BUTTON_MISC;
            text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\CargoMisc_ca.paa"; // Path to your misc icon image
            x = "0.008";
            y = "0.475";
            w = "0.075";
            h = "0.1"; 
        };
        
        class ItemList: RscListNBox
        {
            idc = IDC_ITEM_LIST;
            x = "0.09";
            y = "0.05";
            w = "0.44";
            h = "0.87";
            idcRight = IDC_arrowPlus;
            idcLeft = IDC_arrowMinus;
            drawSideArrows = 1;
            colorBackground[] = {0, 0, 0, 1};
            columns[] = {"0.06", "0.115", "0.82"};
        };
        
        class InventoryList: RscListNBox
        {
            idc = IDC_INVENTORY_LIST;
            x = "0.545";
            y = "0.05";
            w = "0.44";
            h = "0.87";
            idcRight = IDC_arrowPlus;
            idcLeft = IDC_arrowMinus;
            drawSideArrows = 1;
            colorBackground[] = {0, 0, 0, 1};
            columns[] = {"0.06", "0.115", "0.82"};
        };
        
        class ButtonLoadout: RscButton
        {
            idc = IDC_BUTTON_LOADOUT;
            text = "Loadout";
            x = "0.78";
            y = "0.932";
            w = "0.1";
            h = "0.055";
            action = "hint 'Loadout button pressed';";
        };
        
        class ButtonClear: RscButton
        {
            idc = IDC_BUTTON_CLEAR;
            text = "Clear";
            x = "0.885";
            y = "0.932";
            w = "0.1";
            h = "0.055";
            action = "hint 'Clear button pressed';";
        };
    };
};