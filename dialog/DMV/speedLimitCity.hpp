class speedLimitCity {
    idd = 67544;
    name= "speedLimitCity";
    movingEnable = false;
	enableSimulation = true;

    class controlsBackground {
        class Background: Life_RscPicture
		{
			idc = -1;
			text = "\VOLTICRP\images\textures\DMV\speedLimitCity.paa";
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
            x = 0.572187 * safezoneW + safezoneX;
            y = 0.401 * safezoneH + safezoneY;
            w = 0.180469 * safezoneW;
            h = 0.077 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option2: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_fail";
            x = 0.572187 * safezoneW + safezoneX;
            y = 0.489 * safezoneH + safezoneY;
            w = 0.180469 * safezoneW;
            h = 0.077 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option3: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_questionTwo";
            x = 0.572708 * safezoneW + safezoneX;
            y = 0.582556 * safezoneH + safezoneY;
            w = 0.180469 * safezoneW;
            h = 0.077 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option4: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_fail";
            x = 0.572187 * safezoneW + safezoneX;
            y = 0.668704 * safezoneH + safezoneY;
            w = 0.180469 * safezoneW;
            h = 0.077 * safezoneH;
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