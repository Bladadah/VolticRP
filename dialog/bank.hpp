class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscPicture_1200: Life_RscPictureKeepAspect {
            idc = -1;
            text = "MainATM.paa";
            x = 0.238229 * safezoneW + safezoneX;
            y = 0.0693334 * safezoneH + safezoneY;
            w = 0.533854 * safezoneW;
            h = 0.895963 * safezoneH;
          };
    };

    class controls {
        class CashTitle: Life_RscStructuredText {
            idc = 2701;
            text = "";
            x = 0.526 * safezoneW + safezoneX;
            y = 0.282 * safezoneH + safezoneY;
            w = 0.0485417 * safezoneW;
            h = 0.0161111 * safezoneH;
        };

        class BankTitle: Life_RscStructuredText {
            idc = 2706;
            text = "";
            x = 0.437031 * safezoneW + safezoneX;
            y = 0.282 * safezoneH + safezoneY;
            w = 0.0485417 * safezoneW;
            h = 0.0161111 * safezoneH;
        };

        class WithdrawButton: Life_RscButtonMenuRepentz {
            idc = -1;
            onButtonClick = "[] call life_fnc_bankWithdraw";
            x = 0.426042 * safezoneW + safezoneX;
            y = 0.595371 * safezoneH + safezoneY;
            w = 0.15802 * safezoneW;
            h = 0.0531481 * safezoneH;
        };

        class DepositButton: Life_RscButtonMenuRepentz {
            idc = -1;
            text = "";
            onButtonClick = "[] call life_fnc_bankDeposit";
            x = 0.424739 * safezoneW + safezoneX;
            y = 0.523852 * safezoneH + safezoneY;
            w = 0.15802 * safezoneW;
            h = 0.0531481 * safezoneH;
        };

        class DepositAll: Life_RscButtonMenuRepentz
        {
            idc = -1;
            onButtonClick = "[] call life_fnc_bankDepositAll";
            x = 0.425 * safezoneW + safezoneX;
            y = 0.663889 * safezoneH + safezoneY;
            w = 0.15802 * safezoneW;
            h = 0.0531481 * safezoneH;
        };

        class moneyEdit: Life_RscEditRepentz {
            idc = 2702;
            colorText[] = {0,0,0,0.9};
            text = "1";
            sizeEx = 0.065;
            x = 0.444584 * safezoneW + safezoneX;
            y = 0.326822 * safezoneH + safezoneY;
            w = 0.12375 * safezoneW;
            h = 0.044 * safezoneH;
        };

        class PlayerList: Life_RscListbox {
            idc = 2703;
            x = 0.42677 * safezoneW + safezoneX;
            y = 0.39 * safezoneH + safezoneY;
            w = 0.155729 * safezoneW;
            h = 0.116482 * safezoneH;
            colorText[] = {0.16,0.49,0.96,1};
            colorBackground[] = {0,0,0,0};
            colorActive[] = {0,0,0,0};
        };

        class TransferButton: Life_RscButtonMenuRepentz {
            idc = -1;
            text = "";
            onButtonClick = "[] call life_fnc_bankTransfer";
            x = 0.42552 * safezoneW + safezoneX;
            y = 0.73426 * safezoneH + safezoneY;
            w = 0.15802 * safezoneW;
            h = 0.0531481 * safezoneH;
        };

        class CloseButtonKey: Life_RscButtonMenuRepentz {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            x = 0.424479 * safezoneW + safezoneX;
            y = 0.219445 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.022 * safezoneH;
        };
    };
};