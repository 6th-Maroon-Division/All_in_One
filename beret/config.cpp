class CfgPatches
{
    class A6MD_All_in_One_beret
    {
        units[] = {};
        weapons[] = {"Beret_6MD_Holder","Beret_6MD_Holder_TFAR","Beret_6MD_Black","Beret_AEU_Black","Beret_6MD_Marine_Green","Beret_6MD_Maroon","Beret_6MD_Paracommando","Beret_6MD_Brown_Light","Beret_6MD_Tan","Beret_6MD_Light_Tan","Beret_6MD_Orange","Beret_6MD_Brown_Dark","Beret_6MD_Zulu_Force"}; 
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_f_epc","A6MD_All_in_One_core"};
    };
};
class CfgWeapons
{
    class H_Beret_Colonel;
    class Beret_6MD_Black: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Black]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Black_W_Gold_Out_co.paa"};
    };

    class Beret_6MD_Recruit_Mid_Tan: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD Recruit [Mid Tan]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_MidTan_Recruit_co.paa"};
    };

    class Beret_AEU_Black: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, AEU [Black]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_AEU_Black_W_Gold_Out_co.paa"};
    };

    class Beret_6MD_Marine_Green: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Marine Green]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Marine_Green_co.paa"};
    };

    class Beret_6MD_Maroon: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Maroon]";     
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Maroon_co.paa"};
    };

    class Beret_6MD_Paracommando: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Paracommando]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Maroon_Jeppie_co.paa"};
    };

    class Beret_6MD_Brown_Light: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Brown, Light]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Tan2_Jeppie_co.paa"};
    };            

    class Beret_6MD_Brown_Dark: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Brown, Dark]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Brown2_Jeppie_co.paa"};
    };

    class Beret_6MD_Tan: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Tan]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Tan_Jeppie_co.paa"};
    };

    class Beret_6MD_Orange: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Orange]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Brown_Jeppie_co.paa"};
    };      

    class Beret_6MD_Zulu_Force: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Zulu Force]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Dark_Green_co.paa"};
    };         

    class Beret_6MD_Light_Tan: H_Beret_Colonel
    {
        author="Demsoft";
        scope=2;
        displayName="Beret, 6MD [Tan, Light]";        
        picture="\A6MD\All_in_one\core\icons\Logo_6MD.paa";   
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A6MD\All_in_one\beret\icons\Beret_6MD_Tan3_Jeppie_co.paa"};
    };   
};

class CfgVehicles
{
//Paste preffered backpack code here - Choose from BLOCK TWO coding
    class B_AssaultPack_khk;
    class Beret_6MD_Holder: B_AssaultPack_khk
    {
        author = "Bohemia Interactive";
        scope = 2;
        displayName = "Beret Holder";
        model = "\A6MD\All_in_one\beret\data\invisible_model.p3d"        
        picture = "\A6MD\All_in_one\core\icons\Logo_6MD.paa";    //(Optional) replace with your icon image location
        hiddenSelectionsTextures[] = 
        {
          "\A6MD\All_in_one\beret\icons\invisible_model_texture.paa" //replace with your texture location
        };
        maximumLoad = 6.1;
        mass = 0.1;        
    };

    class Beret_6MD_Holder_TFAR: B_AssaultPack_khk
    {
        author = "Bohemia Interactive";
        scope = 2;
        displayName = "Beret Holder with LR Radio";
        model = "\A6MD\All_in_one\beret\data\invisible_model.p3d"        
        picture = "\A6MD\All_in_one\core\icons\Logo_6MD.paa";    //(Optional) replace with your icon image location
        hiddenSelectionsTextures[] = 
        {
          "\A6MD\All_in_one\beret\icons\invisible_model_texture.paa" //replace with your texture location
        };
        maximumLoad = 6.1;
        mass = 0.1; 
    	isbackpack = 1;
        tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_subtype = "digital_lr";
		tf_range = 10000;
    }
};

