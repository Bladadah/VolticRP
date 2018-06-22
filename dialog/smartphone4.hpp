/*
//--Repentz 
MEDICAL SPECIFIC
*/

class smartphoneMEDIC {
  idd = 90000;
  movingEnable = false;
  enableSimulation = false;
  class controlsBackground {
    class Life_RscPicture_1200: Life_RscPictureKeepAspect {
      idc = 1200;
      text = "VOLTICRP\images\textures\Phone\phoneBackMedic.paa";
      x = -0.0625;
      y = -0.3;
      w = 1.1375;
      h = 1.5;
      colorBackground[] = {0,0,0,0};
    };
  };
  class controls {

    class Life_RscButtonInvisible_2411: Life_RscButtonInvisible
		{
			idc = 2411;
			onButtonClick = "[] spawn life_fnc_placeablesMenu;";
			tooltip = "Place and create roadblocks";
      x = 0.425194 * safezoneW + safezoneX;
      y = 0.434 * safezoneH + safezoneY;
      w = 0.029 * safezoneW;
      h = 0.049 * safezoneH;
		};

    class Life_RscButtonInvisible_5555: Life_RscButtonInvisible {
      idc = -1;
      onButtonClick = "closeDialog 0; createDialog ""smartphone"";";
      tooltip = "Previous Menu";
      x = 0.40294 * safezoneW + safezoneX;
      y = 0.733 * safezoneH + safezoneY;
      w = 0.059 * safezoneW;
      h = 0.049 * safezoneH;
    };
  };
};
