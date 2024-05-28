//6MD

class CfgVehicles
{
	class FlagPole_F;
	class 6MD_Flag: FlagPole_F
	{
		scope=2;
		accuracy=10000;
		displayName="6th Maroon Division";
		nameSound="flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture ""\6MD_flags\addons\flags\6MD\Logo_6MD.paa""";
		};
	};
};