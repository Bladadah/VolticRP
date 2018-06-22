class pullOverIllegal {
    idd = 67548;
    name= "pullOverIllegal";
    movingEnable = false;
	enableSimulation = true;

    class controlsBackground {
        class Background: Life_RscPicture
		{
			idc = -1;
			text = "\VOLTICRP\images\textures\DMV\pullOverIllegal.paa";
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
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.412 * safezoneH + safezoneY;
            w = 0.242344 * safezoneW;
            h = 0.077 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option2: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_fail";
            x = 0.516666 * safezoneW + safezoneX;
            y = 0.504629 * safezoneH + safezoneY;
            w = 0.242344 * safezoneW;
            h = 0.077 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option3: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_fail";
            x = 0.515469 * safezoneW + safezoneX;
            y = 0.599 * safezoneH + safezoneY;
            w = 0.242344 * safezoneW;
            h = 0.077 * safezoneH;
            tooltip = "Confirm your choice"; //--- ToDo: Localize;
        };
        class option4: Life_RscButtonInvisible
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_questionSix";
            x = 0.516146 * safezoneW + safezoneX;
            y = 0.690741 * safezoneH + safezoneY;
            w = 0.242344 * safezoneW;
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