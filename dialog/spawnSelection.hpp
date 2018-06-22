class life_spawn_selection {
 idd = 38500;
 movingEnable = false;
 enableSimulation = true;
 //onLoad = "call (profilenamespace getvariable ""LastSpawnPoint"");";
 class controlsBackground {

    class backG: Life_RscPicture
    {
        idc = 1200;
        text = "VOLTICRP\images\textures\spawnScreen.paa";
        x = -0.0620313 * safezoneW + safezoneX;
        y = -0.589 * safezoneH + safezoneY;
        w = 1.11375 * safezoneW;
        h = 1.914 * safezoneH;
    };
    class MapView: Life_RscMapControl
    {
        idc = 38502;
        maxSatelliteAlpha = 1;
        alphaFadeStartScale = 2; // Scale at which satellite map starts appearing
        alphaFadeEndScale = 2; // Scale at which satellite map is fully rendered
        x = 0.422135 * safezoneW + safezoneX;
        y = 0.222222 * safezoneH + safezoneY;
        w = 0.369219 * safezoneW;
        h = 0.475778 * safezoneH;
    };
};
class controls {
    class SpawnPointList: Life_RscListNBox
    {
        idc = 38510;
        coloumns[] = {0,0,0.9};
        drawSideArrows = 0;
        idcLeft = -1;
        idcRight = -1;
        rowHeight = 0.05;
        onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
        x = 0.199949 * safezoneW + safezoneX;
        y = 0.225 * safezoneH + safezoneY;
        w = 0.211406 * safezoneW;
        h = 0.473 * safezoneH;
    };

    class spawnButton: Life_RscButtonInvisible2
    {
        onButtonClick = "[] call life_fnc_spawnConfirm";
        idc = 1006;
        text = ""; //--- ToDo: Localize;
        x = 0.206094 * safezoneW + safezoneX;
        y = 0.76863 * safezoneH + safezoneY;
        w = 0.190781 * safezoneW;
        h = 0.044 * safezoneH;
        colorText[] = {1,1,1,1};
        colorBackground[] = {0,0,0,0.7};
    };
    class ReturnToLobbyButton: Life_RscButtonInvisible2
        {
        onButtonClick = "endmission'memes';";
        idc = 1007;
        text = ""; //--- ToDo: Localize;
        x = 0.631458 * safezoneW + safezoneX;
        y = 0.775 * safezoneH + safezoneY;
        w = 0.144375 * safezoneW;
        h = 0.033 * safezoneH;
        colorText[] = {1,1,1,1};
        colorBackground[] = {0,0,0,0.7};
        };
    };
};