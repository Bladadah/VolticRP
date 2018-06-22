 /*--------------------------------------------------------------------------
    Author:     Maverick Applications
    Website:    https://maverick-applications.com
  
    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/
  
// Configuration file for the weaponshop
  
class maverick_weaponshop_cfg {
	
   cashVar = "life_houseProtect";                              //--- Cash Variable
   cashSymbol = "$";                                   //--- Currency Symbol
   rotationSpeed = 2;                                  //--- Rotation speed for item in preview (1 - 10)
   saveFunction = "[] call SOCK_fnc_updateRequest";    //--- Function to save gear etc. once items are purchased

   class localization {
	   //--- localization for hints etc.
	   msgParamEmpty =                     "Shop Parameter is empty!";
	   msgInVehicle =                      "You cannot be in a Vehicle!";
	   msgShopExists =                     "Shop doesn't Exist!";
	   msgCondition =                      "Not permitted to access this Shop!";
	   msgCashOnHand =                     "Cash on Hand - %1%2";
	   msgCartTotal =                      "Your Cart - %1%2";
	   msgInfoTooltip =                    "--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
	   msgInfoTooltip2 =                   "--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
	   msgEmptyShop =                      "Nothing Found...";
	   msgInfoText =                       "<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
	   msgCartFull =                       "Cart is Full";
	   msgCartEmpty =                      "Cart is Empty";
	   msgNotEnoughCash =                  "Not enough Cash for this Transaction";
	   msgOverrideAlert =                  "Use the override feature to override gear!";
	   msgTransactionComplete =            "Purchase completed for %1%2";
	   msgNotEnoughSpace =                 "You didn't have enough space for all the items. You however only paid for those you had space for!";
	   msgClear =                          "Clear";
	   msgSearch =                         "Search";

	   //--- localization for dialogs
	   #define dialogTabWeapon             "Weapon"
	   #define dialogTabMagazines          "Magazines"
	   #define dialogTabAttachments        "Attachments"
	   #define dialogTabOther              "Other"
	   #define dialogAddBtn                "Add"
	   #define dialogOverrideTooltip       "Override Gear"
	   #define dialogCompleteBtn           "Complete"
	   #define dialogCloseBtn              "Close"
   };

   class shops {

	   class cop_boatwep {
		   title = "Cadet Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 1";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

		   weapons[] = {			   
			   {"arifle_SDAR_F", 200, "true", ""}
		   };

		   magazines[] = {
			   {"20Rnd_556x45_UW_mag", 10, "true", ""}
		   };

		   attachments[] = {
		   };
	   };

	   class cop_general {
		   title = "Cop General Store"; //--- Title of Shop
		   condition = "call life_coplevel >= 1";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

		   weapons[] = {
			   //--- item classname, price, condition, custom display name
		   };

		   magazines[] = {

		   };

		   attachments[] = {

		   };

		   items[] = {
				{ "Binocular", 250, "true", ""},
				{ "ItemGPS", 500, "true", ""},
				{ "ItemMap", 10, "true", ""},
				{ "ItemCompass", 10, "true", ""},
				{ "KA_TL_122_flashlight", 80, "true", ""}
		   };
	   };

	   class cop_cadet {
		   title = "Cadet Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 1";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

		   weapons[] = {
			   //--- item classname, price, condition, custom display name
			   
			   {"tf_anprc152", 15, "true", ""},
			   {"CG_TELBAT", 35, "true", ""},
			   {"CSW_M26C", 50, "true", ""},
               {"RH_g17", 200, "true", ""}
			};

		   magazines[] = {
			   {"CSW_Taser_Probe_Mag", 5, "true", ""},
			   {"nonlethal_swing", 10, "true", "Swing"},
			   {"RH_17Rnd_9x19_g17", 10, "true", ""}
			};

		   attachments[] = {
			   { "RH_x300", 70, "true", ""}
		   };
	   };
	   
	   class cop_ofcsnr {
		   title = "Officer/Senior Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 2";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				
				{"tf_anprc152", 15, "true", ""},
				{"CG_TELBAT", 35, "true", ""},
				{"CSW_M26C", 50, "true", ""},
				{"RH_kimber_nw", 200, "true", ""},
				{"RH_usp", 250, "true", ""},
				{"RH_g19", 250, "true", ""},
				{"CSW_M870", 450, "true", ""},
				
				{"RH_M4A1_ris", 4260, "true", ""},
				{"hlc_rifle_Colt727", 3850, "true", ""},
				{"KA_RO991", 2650, "true", ""}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 5, "true", ""},
				{"nonlethal_swing", 10, "true", "Swing"},
				{"KA_20Rnd_46x30_FMJ", 10, "true", ""},
				{"RH_7Rnd_45cal_m1911", 10, "true", ""},
				{"RH_12Rnd_45cal_usp", 10, "true", ""},
				{"RH_17Rnd_9x19_g17", 10, "true", ""},
				{"CSW_M870_8Rnd_buck", 10, "true", ""},
				{"KA_32Rnd_9x19_FMJ_Mag", 10, "true", ""},
				{"hlc_rifle_Colt727", 3850, "true", ""},
				{"RH_30Rnd_556x45_Mk262", 50, "true", ""}
			};

			attachments[] = {
				{ "RH_barska_rds", 70, "true", ""},
				{ "RH_cmore", 70, "true", ""},
				{ "RH_SFM952V", 50, "true", ""},
				{ "RH_x300", 50, "true", ""},
				{ "RH_eotech553", 70, "true", ""}
			};
	   };
	   class cop_cpl {
		   title = "Corporal Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 3";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				
				{"tf_anprc152", 15, "true", ""},
				{"CG_TELBAT", 35, "true", ""},
				{"CSW_M26C", 50, "true", ""},
				{"RH_kimber_nw", 200, "true", ""},
				{"RH_usp", 250, "true", ""},
				{"RH_g19", 250, "true", ""},
				{"CSW_M870", 450, "true", ""},
				
				
				{"RH_M16A3", 3650, "true", ""},
				{"hlc_rifle_Colt727", 3850, "true", ""},
				{"RH_M4A1_ris", 4260, "true", ""}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 5, "true", ""},
				{"nonlethal_swing", 10, "true", "Swing"},
				{"KA_20Rnd_46x30_FMJ", 10, "true", ""},
				{"RH_7Rnd_45cal_m1911", 10, "true", ""},
				{"RH_12Rnd_45cal_usp", 10, "true", ""},
				{"RH_17Rnd_9x19_g17", 10, "true", ""},
				{"CSW_M870_8Rnd_buck", 10, "true", ""},
				{"RH_30Rnd_556x45_Mk262", 50, "true", ""}
			};

			attachments[] = {
				{ "RH_barska_rds", 70, "true", ""},
				{ "RH_cmore", 70, "true", ""},
				{ "RH_SFM952V", 50, "true", ""},
				{ "RH_x300", 50, "true", ""},
				{ "RH_eotech553", 70, "true", ""}
			};
	   };
	   class cop_sgt {
		   title = "Sergeant Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 4";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				
				{"tf_anprc152", 15, "true", ""},
				{"CG_TELBAT", 35, "true", ""},
				{"CSW_M26C", 50, "true", ""},
				{"RH_kimber_nw", 200, "true", ""},
				{"RH_usp", 250, "true", ""},
				{"RH_g19", 250, "true", ""},
				{"CSW_M870", 450, "true", ""},
				
				
				{"RH_M16A3", 3650, "true", ""},
				{"RH_M16A4", 3650, "true", ""},
				{"hlc_rifle_Colt727", 3850, "true", ""},
				{"RH_M4A1_ris", 4260, "true", ""}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 5, "true", ""},
				{"nonlethal_swing", 10, "true", "Swing"},
				{"KA_20Rnd_46x30_FMJ", 10, "true", ""},
				{"RH_7Rnd_45cal_m1911", 10, "true", ""},
				{"RH_12Rnd_45cal_usp", 10, "true", ""},
				{"RH_17Rnd_9x19_g17", 10, "true", ""},
				{"CSW_M870_8Rnd_buck", 10, "true", ""},
				{"RH_30Rnd_556x45_Mk262", 50, "true", ""}
			};

			attachments[] = {
				{ "RH_barska_rds", 70, "true", ""},
				{ "RH_cmore", 70, "true", ""},
				{ "RH_SFM952V", 50, "true", ""},
				{ "RH_x300", 50, "true", ""},
				{ "RH_eotech553", 70, "true", ""}
				
			};
	   };

	   class cop_dcommand {
		   title = "Command Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 5";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				
				{"tf_anprc152", 15, "true", ""},
				{"CG_TELBAT", 35, "true", ""},
				{"CSW_M26C", 50, "true", ""},
				{"RH_kimber_nw", 200, "true", ""},
				{"RH_usp", 250, "true", ""},
				{"RH_g19", 250, "true", ""},
				{"CSW_M870", 450, "true", ""},
				
				
				{"RH_M16A3", 3650, "true", ""},
				{"RH_M16A4", 3650, "true", ""},
				{"RH_M16A6", 3650, "true", ""},
				{"hlc_rifle_Colt727", 3850, "true", ""},
				{"RH_M4A1_ris", 4260, "true", ""}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 5, "true", ""},
				{"nonlethal_swing", 10, "true", "Swing"},
				{"KA_20Rnd_46x30_FMJ", 10, "true", ""},
				{"RH_7Rnd_45cal_m1911", 10, "true", ""},
				{"RH_12Rnd_45cal_usp", 10, "true", ""},
				{"RH_17Rnd_9x19_g17", 10, "true", ""},
				{"CSW_M870_8Rnd_buck", 10, "true", ""},
				{"RH_30Rnd_556x45_Mk262", 50, "true", ""}
			};

			attachments[] = {
				{ "RH_barska_rds", 70, "true", ""},
				{ "RH_cmore", 70, "true", ""},
				{ "RH_x300", 50, "true", ""},
				{ "RH_SFM952V", 50, "true", ""},
				{ "RH_eothhs1", 50, "true", ""},
				{ "RH_eotech553", 70, "true", ""}
			};
	   };

	   class cop_swat {
		   title = "S.W.A.T Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 6";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				
				{"tf_anprc152", 15, "true", ""},
				{"CG_TELBAT", 35, "true", ""},
				{"CSW_M26C", 50, "true", ""},
				{"RH_M4sbr", 3850, "true", ""},
				{"RH_M27IAR", 3850, "true", ""},
				{"RH_M16A1gl", 3750, "true", ""},
				{"RH_M4A6", 3750, "true", ""},
				{"hlc_rifle_honeybadger", 4000, "true", ""},
				{"hlc_rifle_g3a3", 4000, "true", ""},
				{"RH_deagle", 1550, "true", ""},
				{"CSW_FN57_Ballistic_Shield", 350, "true", ""},
				{"KA_FMG9", 1450, "true", ""},
				{"KA_KSG_Black", 2950, "true", ""},
				{"bnae_trg42_virtual", 2950, "true", ""},
				{"hlc_rifle_ACR_SBR_black", 3850, "true", ""},
				{"KA_DSR50", 9250, "true", ""},
				{"hlc_smg_mp510", 9250, "true", ""},
				{"HandGrenade_Stone",500,"true","Flashbang"}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 5, "true", ""},
				{"nonlethal_swing", 10, "true", "Swing"},
				{"29rnd_300BLK_STANAG", 10, "true", ""},
				{"RH_30Rnd_556x45_Mk262", 10, "true", ""},
				{"RH_60Rnd_556x45_Mk262", 10, "true", ""},
				{"hlc_20rnd_762x51_b_G3", 10, "true", ""},
				{"CSW_20Rnd_57x28_SS190", 10, "true", ""},
				{"RH_30Rnd_68x43_Match", 10, "true", ""},
				{"RH_7Rnd_50_AE", 10, "true", ""},
				{"5Rnd_338LM_Magazine", 10, "true", ""},
				{"hlc_30rnd_556x45_EPR", 10, "true", ""},
				{"7Rndx2_KSG_buck_mag", 10, "true", ""},
				{"KA_33Rnd_9x19_FMJ_Mag", 10, "true", ""},
				{"hlc_30Rnd_10mm_JHP_MP5", 10, "true", ""},
				{"KA_DSR50_3Rnd_x2_M33_FMJ_Mag", 500, "true", ""}
			};

			attachments[] = {
				{ "RH_barska_rds", 70, "true", ""},
				{ "RH_cmore", 70, "true", ""},
				{ "RH_eotech553", 70, "true", ""},
				{ "RH_compm4s", 170, "true", ""},
				{ "RH_compM2", 170, "true", ""},
				{ "CSW_FN57_Barska", 50, "true", ""},
				{ "acc_pointer_IR", 70, "true", ""},
				{ "RH_SFM952V", 50, "true", ""},
				{ "CSW_FN57_Shield_P", 50, "true", ""},
				{ "CSW_FN57_laser_IR_2", 50, "true", ""},
				{ "RH_m3lr", 1050, "true", ""},
				{ "optic_Arco_blk_F", 1050, "true", ""},
				{ "RH_ta31rmr_2D", 1050, "true", ""},
				{ "optic_AMS", 1050, "true", ""},
				{ "KA_SCAR_H_Laser_Black_GREEN",500,"true",""}
			};
	   };

	   class cop_scommand {
		   title = "State Command Armoury"; //--- Title of Shop
		   condition = "call life_coplevel >= 7";   //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				
				{"tf_anprc152", 15, "true", ""},
				{"CG_TELBAT", 35, "true", ""},
				{"CSW_M26C", 50, "true", ""},
				{"hlc_rifle_RK62", 4000, "true", ""},
				{"AN94_MTK83", 4000, "true", ""},
				{"RH_bullb", 1350, "true", ""},
				{"KA_SCAR_L_Black_AFG", 3950, "true", ""},
				{"arifle_M8_F", 4850, "true", ""},
				{"bnae_mk1_virtual", 1750, "true", ""},
				{"CSW_M500", 1750, "true", ""},
				{"HandGrenade_Stone",500,"true","Flashbang"}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 5, "true", ""},
				{"RH_6Rnd_454_Mag", 25, "true", ""},
				{"30Rnd_762x39_Magazine", 25, "true", ""},
				{"10Rnd_303_Magazine", 25, "true", ""},
				{"KA_30Rnd_545x39_7N24_AP", 25, "true", ""},
				{"nonlethal_swing", 10, "true", "Swing"},
				{"CSW_5Rnd_127x41_Magnum", 10, "true", ""},
				{"KA_SCAR_L_30rnd_Mk318_SOST_mag", 10, "true", ""},
				{"30Rnd_556x45_Stanag", 10, "true", ""}
			};

			attachments[] = {
				{ "RH_barska_rds", 70, "true", ""},
				{ "RH_cmore", 70, "true", ""},
				{ "RH_eotech553", 70, "true", ""},
				{ "acc_pointer_IR", 70, "true", ""},
				{ "RH_compm4s", 170, "true", ""},
				{ "RH_compM2", 170, "true", ""},
				{ "SCAR_14_Inches_Barrel_Flash_Hider", 270, "true", ""},
				{ "RH_eothhs1", 170, "true", ""},
				{ "KA_SCAR_H_Laser_Black_GREEN",500,"true",""}

			};
	   };

		   class rebel {
		   title = "Rebel Store"; //--- Title of Shop
		   condition = "(missionNamespace getVariable ['mav_ttm_var_rebel',0]) isEqualTo 1";
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

		   weapons[] = {
			   //--- item classname, price, condition, custom display name
			   { "ItemGPS", 500, "true", ""},
			   { "tf_anprc152", 25, "true", ""},
			   { "RH_g18", 15600, "true", ""},
			   { "RH_sbr9_des", 20000, "true", ""},
			   { "hlc_smg_mp5k", 22600, "true", ""},
			   { "RH_tec9", 11600, "true", ""},
			   { "RH_Deaglem", 12600, "true", ""},
			   { "hlc_rifle_aks74u", 35600, "true", ""},
			   { "KA_UMP45_P", 37600, "true", ""}
		   };

		   magazines[] = {
			   { "RH_20Rnd_762x51_AR10", 50, "true", ""},
			   { "RH_19Rnd_9x19_g18", 50, "true", ""},
			   { "KA_25Rnd_45ACP_High_Presure_Mag", 50, "true", ""},
			   { "hlc_30Rnd_9x19_B_MP5", 50, "true", ""},
			   { "RH_32Rnd_9x19_tec", 50, "true", ""},
			   { "RH_7Rnd_50_AE", 50, "true", ""},
			   { "50Rnd_570x28_SMG_03", 250, "true", ""},
			   { "10Rnd_303_Magazine", 50, "true", ""},
			   { "hlc_30Rnd_545x39_B_AK", 50, "true", ""},
			   { "7Rndx2_KSG_buck_mag", 50, "true", ""},
			   { "RH_32Rnd_9mm_M822", 50, "true", ""}
		   };

		   attachments[] = {
				{ "RH_barska_rds", 370, "true", ""},
				{ "RH_cmore", 470, "true", ""},
				{ "RH_eotech553", 470, "true", ""},
				{ "RH_compm4s", 570, "true", ""},
				{ "RH_compM2", 570, "true", ""}
		   };
	   };
		
		class rebelA {
		   title = "Advanced Rebel Store"; //--- Title of Shop
		   condition = "(missionNamespace getVariable ['mav_ttm_var_rebelA',0]) isEqualTo 1";
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

		   weapons[] = {
			   //--- item classname, price, condition, custom display name
			   { "ItemGPS", 500, "true", ""},
			   { "tf_anprc152", 25, "true", ""},
			   { "KA_SG_550", 50500, "true", ""},
			   { "RH_M4A1_ris", 52600, "true", ""},
			   { "hlc_rifle_aks74", 65600, "true", ""},
			   { "bnae_rk95r_virtual", 68500, "true", ""},
			   { "hlc_rifle_RK62", 77000, "true", ""},
			   { "hlc_rifle_aek971worn", 81000, "true", ""}
		   };

		   magazines[] = {
			   { "hlc_30Rnd_545x39_B_AK", 150, "true", ""},
			   { "RH_30Rnd_556x45_Mk262", 90, "true", ""},
			   { "30Rnd_762x39_Magazine", 150, "true", ""},
			   { "KA_SIG_30rnd_Mk318_SOST_mag", 90, "true", ""},
			   { "hlc_30Rnd_762x39_b_ak", 150, "true", ""}
		   };

		   attachments[] = {
				{ "RH_barska_rds", 370, "true", ""},
				{ "RH_cmore", 470, "true", ""},
				{ "RH_eotech553", 470, "true", ""},
				{ "RH_compm4s", 570, "true", ""},
				{ "RH_compM2", 570, "true", ""},
				{ "hlc_optic_kobra", 3000, "true", ""},
				
		   };
	   };
		   class genstore {
		   title = "Malden General Store"; //--- Title of Shop
		   condition = "";  //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				//{ "CG_BAT", 700, "true", ""},
				{ "tf_anprc152", 25, "true", ""}
			};
		
			items[] = {
				{ "Binocular", 250, "true", ""},
				{ "ItemGPS", 500, "true", ""},
				{ "ItemMap", 10, "true", ""},
				{ "ItemCompass", 10, "true", ""},
				{ "KA_TL_122_flashlight", 80, "true", ""}
			};

			magazines[] = {
				{ "nonlethal_swing", 150, "true", "Swing"}
			};
	   };


	   class f_station_store {
		   title = "Malden Fuel Station Store"; //--- Title of Shop
		   condition = "";     //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart
	
		   items[] = {
			   //--- item classname, price, condition, custom display name
			   { "tf_anprc152", 150, "true", ""},
			   { "Binocular", 250, "true", ""},
			   { "ItemGPS", 500, "true", ""},
			   { "ItemMap", 10, "true", ""},
			   { "ItemCompass", 10, "true", ""},
			   { "KA_TL_122_flashlight", 800, "true", ""}
		   };
	   };

	   class med_basic {
		   title = "Medic Shop"; //--- Title of Shop
		   condition = "call life_medicLevel >= 1";  //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart
	
		   items[] = {
			   //--- item classname, price, condition, custom display name
			   { "tf_anprc152", 50, "true", ""},
			   { "Medikit", 50, "true", ""},
			   { "FirstAidKit", 50, "true", ""},
			   { "Binocular", 50, "true", ""},
			   { "ItemGPS", 50, "true", ""}
		   };
	   };

	   class gun {
		   title = "Billy Joe's Firearms"; //--- Title of Shop
		   condition = "license_civ_gun";  //--- Condition to meet to access shop
		   simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
		   maxCart = 25;           //--- Max Amount of Items in Shopping Cart

		   weapons[] = {
			   //--- item classname, price, condition, custom display name
			   { "ItemGPS", 50, "true", ""},
			   { "tf_anprc152", 25, "true", ""},
			   { "KA_TL_122_flashlight", 50, "true", ""},
			   { "KA_FNP45", 7600, "true", ""},
			   { "KA_Px4", 7600, "true", ""},
			   { "RH_m9", 7600, "true", ""},
			   { "RH_cz75", 7600, "true", ""},
			   { "RH_g17", 7600, "true", ""},
			   { "RH_g19", 7600, "true", ""},
			   { "RH_gsh18", 7600, "true", ""},
			   { "RH_kimber", 7800, "true", ""},
			   { "RH_kimber_nw", 7800, "true", ""},
			   { "RH_m1911", 7800, "true", ""},
			   { "RH_p226", 8600, "true", ""},
			   { "RH_sw659", 8600, "true", ""},
			   { "RH_usp", 8600, "true", ""},
			   { "RH_vp70", 8600, "true", ""},
			   { "RH_uspm", 10000, "true", ""},
			   { "RH_mp412", 9900, "true", ""},
			   { "RH_mateba", 9900, "true", ""},
			   { "KA_crossbow_wood", 8250, "true", ""},
			   { "bnae_spr220_so_virtual", 9500, "true", ""},
			   { "bnae_spr220_virtual", 11500, "true", ""},
			   { "bnae_m97_camo1_virtual", 14500, "true", ""}
		   };

		   magazines[] = {
			   { "KA_arrow_mag", 25, "true", ""},
			   { "2Rnd_00_Buckshot_Magazine", 25, "true", ""},
			   { "KA_15Rnd_45ACP_Mag", 25, "true", ""},
			   { "KA_Px4_17Rnd_9x19_FMJ_Mag", 25, "true", ""},
			   { "RH_15Rnd_9x19_M9", 25, "true", ""},
			   { "RH_16Rnd_9x19_CZ", 25, "true", ""},
			   { "RH_17Rnd_9x19_g17", 25, "true", ""},
			   { "RH_18Rnd_9x19_gsh", 25, "true", ""},
			   { "KA_12Rnd_45ACP_FMJ_Mag", 25, "true", ""},
			   { "RH_32Rnd_9x19_tec", 25, "true", ""},
			   { "RH_7Rnd_45cal_m1911", 25, "true", ""},
			   { "RH_6Rnd_44_Mag", 25, "true", ""},
			   { "RH_6Rnd_357_Mag", 25, "true", ""},
			   { "6Rnd_00_Buckshot_Magazine", 25, "true", ""},
			   { "RH_15Rnd_9x19_SIG", 25, "true", ""},
			   { "RH_14Rnd_9x19_sw", 25, "true", ""},
			   { "RH_6Rnd_454_Mag", 25, "true", ""},
			   { "RH_12Rnd_45cal_usp", 25, "true", ""},
			   { "RH_18Rnd_9x19_VP", 25, "true", ""},
			   { "RH_16Rnd_40cal_usp", 25, "true", ""}
		   };

		   attachments[] = {
			   { "optic_ACO_grn_smg", 250, "true", ""},
			   { "acc_flashlight", 150, "true", ""}
		   };
	   };
   };
};
#include "gui\weapon_gui_master.cpp"
