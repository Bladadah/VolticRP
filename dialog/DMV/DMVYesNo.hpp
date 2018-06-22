class Life_yesnoMenu {
    idd = 67543;
    name= "Life_yesno";
    movingEnable = false;
	enableSimulation = true;

    class controlsBackground {
        class Background: Life_RscPicture
		{
			idc = -1;
			text = "\VOLTICRP\images\textures\DMV\DMVYesNo.paa";
            x = 0.262812 * safezoneW + safezoneX;
            y = 0.115 * safezoneH + safezoneY;
            w = 0.474375 * safezoneW;
            h = 0.792 * safezoneH;
		};
    };

    class controls {
        class accept: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_questionOne";
            tooltip = "Start Test";
            x = 0.369749 * safezoneW + safezoneX;
            y = 0.551833 * safezoneH + safezoneY;
            w = 0.0721875 * safezoneW;
            h = 0.044 * safezoneH;
        };

        class decline: Life_RscButtonInvisible
        {
            idc = -1;
            tooltip = "Close Test";
            onButtonClick = "closeDialog 0;";
            x = 0.546875 * safezoneW + safezoneX;
            y = 0.551852 * safezoneH + safezoneY;
            w = 0.0721875 * safezoneW;
            h = 0.044 * safezoneH;
        };
    };
};