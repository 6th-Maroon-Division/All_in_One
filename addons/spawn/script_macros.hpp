#define MACRO_UNITB(CNAME,PARENT,DISPLAYNAME)class A6MD_SPAWN_B_##CNAME : PARENT\
    {\
        displayName = #DISPLAYNAME;\
        scope = 2;\
        scopeCurator = 2;\
        scopeArsenal = 2;\
        author="6MD Dev Team";\
        uniformClass = "U_B_CombatUniform_mcam";\
        backpack = "";\
        weapons[] = {};\
        respawnWeapons[] = {};\
        Items[] = {};\
        RespawnItems[] = {};\
        magazines[] = {};\
        respawnMagazines[] = {};\
        linkedItems[] = {"Beret_6MD_Black"};\
        respawnLinkedItems[] = {"Beret_6MD_Black"};\
        class EventHandlers : EventHandlers { init = ""; };\
        faction = "A6MD_Faction_6MD";\
		editorSubcategory="A6MD_6MD_Man";\
        editorPreview = "\A6MD\All_in_One\addons\spawn\preview\PreviewBluefore.jpg";\
        identityTypes[] = {\
            "LanguageENG_F", "Head_NATO", "NoGlasses"\
        };\
    };