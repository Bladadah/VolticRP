class carCrash {
    idd = 67549;
    name= "carCrash";
    movingEnable = false;
	enableSimulation = true;

    class controlsBackground {
        class Background: Life_RscPicture
		{
			idc = -1;
			text = "\VOLTICRP\images\textures\DMV\carCrash.paa";
            x = 0.237031 * safezoneW + safezoneX;
            y = 0.016 * safezoneH + safezoneY;
            w = 0.531094 * safezoneW;
            h = 0.968 * safezoneH;
		};
    };

    class controls {
        class option1: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_fail";
            x = 0.494844 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.262969 * safezoneW;
            h = 0.099 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option2: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_questionSeven";
            x = 0.494844 * safezoneW + safezoneX;
            y = 0.522 * safezoneH + safezoneY;
            w = 0.262969 * safezoneW;
            h = 0.11 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option3: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_fail";
            x = 0.494844 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.262969 * safezoneW;
            h = 0.11 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };

        class decline: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.7475 * safezoneW + safezoneX;
            y = 0.137 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.033 * safezoneH;
            tooltip = "Cancel this test"; //--- ToDo: Localize;
        };
    };
};