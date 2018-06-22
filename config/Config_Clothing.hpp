class Clothing {
        class CID {
                title = "STR_Shops_CID_Cloth";
                conditions = "call life_coplevel >= 7";
                side = "cop";
                uniforms[] = {
                    { "NONE", $STR_C_Remove_uniforms, 0, "" },
                    { "U_C_Scientist", "Radiation Suit", 500, "" }, //Arma				
					{ "U_C_Poloshirt_blue", "", 50, "" }, //Arma
			        { "U_C_Poloshirt_burgundy", "", 50, "" }, //Arma
			        { "U_C_Poloshirt_redwhite", "", 50, "" }, //Arma
			        { "U_C_Poloshirt_salmon", "", 50, "" }, //Arma
			        { "U_C_Poloshirt_stripped", "", 50, "" }, //Arma
			        { "U_C_Poloshirt_tricolour", "", 50, "" }, //Arma
			        { "U_C_ConstructionCoverall_Black_F", "", 150, "" }, //Laws Of War
			        { "U_C_ConstructionCoverall_Blue_F", "", 150, "" }, //Laws Of War
			        { "U_C_ConstructionCoverall_Red_F", "", 150, "" }, //Laws Of War
			        { "U_BG_Guerilla2_2", "", 200, "" }, //Arma
			        { "U_BG_Guerilla2_1", "", 200, "" }, //Arma
			        { "U_BG_Guerilla3_1", "", 150, "" }, //Arma
			        { "U_C_HunterBody_grn", "", 150, "" }, //Arma
			        { "U_OrestesBody", "", 150, "" }, //Arma
			        { "U_C_man_sport_1_F", "", 50, "" }, //Apex
			        { "U_C_man_sport_3_F", "", 50, "" }, //Apex
			        { "U_C_man_sport_2_F", "", 50, "" }, //Apex
			        { "U_C_Man_casual_6_F", "", 50, "" }, //Apex
			        { "U_C_Man_casual_4_F", "", 50, "" }, //Apex
			        { "U_C_Man_casual_5_F", "", 50, "" } //Apex
                };

                headgear[] = {
                    { "NONE", $STR_C_Remove_headgear, 0, "" },
					{ "H_CrewHelmetHeli_B", "Hazmat Breather", 350, "" }, //Arma
					{ "H_Bandanna_gry", "", 20, "" }, //Arma
			        { "H_Bandanna_blu", "", 20, "" }, //Arma
			        { "H_Bandanna_cbr", "", 20, "" }, //Arma
			        { "H_Bandanna_khk", "", 20, "" }, //Arma
			        { "H_Bandanna_surfer", "", 20, "" }, //Arma
			        { "H_Bandanna_surfer_blk", "", 20, "" }, //Arma
			        { "H_Bandanna_surfer_grn", "", 20, "" }, //Arma
			        { "H_Bandanna_camo", "", 20, "" }, //Arma
			        { "H_Booniehat_khk", "", 50, "" }, //Arma
			        { "H_Cap_oli", "", 50, "" }, //Arma
			        { "H_Construction_headset_orange_F", "", 150, "" }, //Laws Of War
			        { "H_Construction_headset_red_F", "", 150, "" }, //Laws Of War
			        { "H_Construction_headset_vrana_F", "", 150, "" }, //Laws Of War
			        { "H_Construction_headset_yellow_F", "", 150, "" }, //Laws Of War
			        { "H_Hat_blue", "", 50, "" }, //Arma
			        { "H_Hat_brown", "", 50, "" }, //Arma
			        { "H_Hat_grey", "", 50, "" }, //Arma
			        { "H_StrawHat", "", 50, "" }, //Arma
			        { "H_StrawHat_dark", "", 50, "" } //Arma
                };
                goggles[] = {
                    { "NONE", $STR_C_Remove_goggles, 0, "" },
					{ "G_Aviator", "", 150, "" }, //Arma
			        { "G_Lady_Blue", "", 50, "" }, //Arma
			        { "G_Respirator_blue_F", "", 150, "" }, //Laws Of War
			        { "G_Respirator_white_F", "", 150, "" }, //Laws Of War
			        { "G_Respirator_yellow_F", "", 150, "" }, //Laws Of War
			        { "G_Shades_Black", "", 150, "" }, //Arma
			        { "G_Shades_Blue", "", 150, "" }, //Arma
			        { "G_Spectacles", "", 150, "" }, //Arma
			        { "G_Sport_Blackred", "", 150, "" }, //Arma
			        { "G_Spectacles_Tinted", "", 150, "" } //Arma
                };
                vests[] = {
                    { "NONE", $STR_C_Remove_vests, 0, "" },
			        { "V_Safety_blue_F", "", 200, "" }, //Laws Of War
			        { "V_Safety_orange_F", "", 200, "" }, //Laws Of War
			        { "V_Safety_yellow_F", "", 200, "" }, //Laws Of War
			        { "V_Press_F", "", 150, "" } //Arma
                };
                backpacks[] = {
                    { "NONE", $STR_C_Remove_backpacks, 0, "" },
				    { "B_AssaultPack_blk", "", 150, "" }, //Arma
			        { "B_AssaultPack_cbr", "", 150, "" }, //Arma
			        { "B_AssaultPack_ocamo", "", 150, "" }, //Arma
			        { "B_Carryall_cbr", "", 300, "" }, //Arma
			        { "B_Carryall_ocamo", "", 300, "" }, //Arma
			        { "B_Carryall_khk", "", 300, "" }, //Arma
			        { "B_Carryall_mcamo", "", 300, "" }, //Arma
			        { "B_Carryall_oli", "", 300, "" }, //Arma
			        { "B_FieldPack_ocamo", "", 150, "" }, //Arma
			        { "B_FieldPack_khk", "", 150, "" }, //Arma
			        { "B_FieldPack_oli", "", 150, "" } //Arma
                };
            };
    
    class VIP {
        title = "STR_Shops_VIP";
        conditions = "call life_donorlevel >= 1";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "VRP_awesome1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_bb1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_beats1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_bipolar1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_burgerking1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_catvideos1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_chickens1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_condoms1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_csgo1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_dad1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_deeznuts1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_ea1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_et1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_evolution1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_ferrari1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_fightclub1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_gameover1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_gamerepeat1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_got1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_hand1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_hearts1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_homer1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_illuminati1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_jason1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_joker1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_kfc1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_lambo1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_lego1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_loading1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_mario1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_mayan1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_mtv1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_nike1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_masterrace1", "", 150, "" }, //VolticRP_Clothing
            { "VRP_peanut1", "", 150, "" }, //VolticRP_Clothing    
            { "VRP_pepsi1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_pika1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_steam1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_stoned1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_strippers1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_superman1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_taylorswift1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_tupac1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_turtles1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_upyours1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_woods1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_wow1", "", 150, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F24", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F25", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F16", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F17", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F18", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F19", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F20", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F21", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F22", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F23", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F15", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F3", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F26", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F27", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F28", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F12", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F8", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BLK_F", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F11", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F29", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F30", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F31", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F32", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F33", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F34", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F35", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F10", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F7", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F6", "", 250, "" }, //VolticRP_Clothing
            { "VRP_SUITS_BR_F5", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F4", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F9", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F13", "", 250, "" }, //VolticRP_Clothing 
            { "VRP_SUITS_BR_F14", "", 250, "" } //VolticRP_Clothing  			
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "VRP_AfroHat", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_CapitalHat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_cowboyhat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_DrinkingHat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_crown", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_horsehead_black", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_horsehead_Brown", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_horsehead_pink", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_longhairblack", "", 100, "" }, //VolticRP_Clothing
			{ "VRP_longhairblond", "", 100, "" }, //VolticRP_Clothing
			{ "VRP_longhairbrown", "", 100, "" }, //VolticRP_Clothing
			{ "VRP_mexicanhat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_partyhat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_PirateHat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_sombrero", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_SpinningHat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_TurbanHat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_russianhat", "", 250, "" }, //VolticRP_Clothing
			{ "VRP_WarmHat", "", 250, "" } //VolticRP_Clothing	
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Aviator", "", 150, "" }, //Arma
			{ "G_Lady_Blue", "", 50, "" }, //Arma
			{ "G_Respirator_blue_F", "", 150, "" }, //Laws Of War
			{ "G_Respirator_white_F", "", 150, "" }, //Laws Of War
			{ "G_Respirator_yellow_F", "", 150, "" }, //Laws Of War
			{ "G_Shades_Black", "", 150, "" }, //Arma
			{ "G_Shades_Blue", "", 150, "" }, //Arma
			{ "G_Spectacles", "", 150, "" }, //Arma
			{ "G_Sport_Blackred", "", 150, "" }, //Arma
			{ "G_Spectacles_Tinted", "", 150, "" } //Arma
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Safety_blue_F", "", 200, "" }, //Laws Of War
			{ "V_Safety_orange_F", "", 200, "" }, //Laws Of War
			{ "V_Safety_yellow_F", "", 200, "" }, //Laws Of War
			{ "V_Press_F", "", 150, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "vrpbp_22", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_20", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_19", "", 250, "" }, //VolticRP_Clothing
			{ "vrpADC", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_2", "", 250, "" }, //VolticRP_Clothing
			{ "vrpaiden", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbatman_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbender_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbender_2", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_10", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_11", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_6", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_5", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_12", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_3", "", 250, "" }, //VolticRP_Clothing
			{ "vrpclint_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpeagle", "", 250, "" }, //VolticRP_Clothing
			{ "vrpeminem_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_8", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_4", "", 250, "" }, //VolticRP_Clothing
			{ "vrpkatie", "", 250, "" }, //VolticRP_Clothing
			{ "vrpgoonsquad", "", 250, "" }, //VolticRP_Clothing
			{ "vrpgraf_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpgraf_2", "", 250, "" }, //VolticRP_Clothing
			{ "vrpgraf_3", "", 250, "" }, //VolticRP_Clothing
			{ "vrpgucci", "", 250, "" }, //VolticRP_Clothing
			{ "vrphulk_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_9", "", 250, "" }, //VolticRP_Clothing
			{ "vrpjoker_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpkaelmario", "", 250, "" }, //VolticRP_Clothing
			{ "vrpkaelmonty", "", 250, "" }, //VolticRP_Clothing
			{ "vrpkaelmonty2", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_13", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_14", "", 250, "" }, //VolticRP_Clothing
			{ "vrppanda", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_15", "", 250, "" }, //VolticRP_Clothing
			{ "vrppumpkin_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_16", "", 250, "" }, //VolticRP_Clothing
			{ "vrpcat", "", 250, "" }, //VolticRP_Clothing
			{ "vrpsmashing", "", 250, "" }, //VolticRP_Clothing
			{ "vrpsparta_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpspecktators", "", 250, "" }, //VolticRP_Clothing
			{ "vrpsponge_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpdarth", "", 250, "" }, //VolticRP_Clothing
			{ "vrpturtles_1", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_7", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_17", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_18", "", 250, "" }, //VolticRP_Clothing
			{ "vrpbp_21", "", 250, "" }, //VolticRP_Clothing
			{ "vrpkaelsuits", "", 250, "" } //VolticRP_Clothing
        };
    };
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_C_Scientist", "Radiation Suit", 500, "" }, //Arma
			{ "U_C_Poloshirt_blue", "", 50, "" }, //Arma
			{ "U_C_Poloshirt_burgundy", "", 50, "" }, //Arma
			{ "U_C_Poloshirt_redwhite", "", 50, "" }, //Arma
			{ "U_C_Poloshirt_salmon", "", 50, "" }, //Arma
			{ "U_C_Poloshirt_stripped", "", 50, "" }, //Arma
			{ "U_C_Poloshirt_tricolour", "", 50, "" }, //Arma
			{ "U_C_ConstructionCoverall_Black_F", "", 150, "" }, //Laws Of War
			{ "U_C_ConstructionCoverall_Blue_F", "", 150, "" }, //Laws Of War
			{ "U_C_ConstructionCoverall_Red_F", "", 150, "" }, //Laws Of War
			{ "U_BG_Guerilla2_2", "", 200, "" }, //Arma
			{ "U_BG_Guerilla2_1", "", 200, "" }, //Arma
			{ "U_BG_Guerilla3_1", "", 150, "" }, //Arma
			{ "U_C_HunterBody_grn", "", 150, "" }, //Arma
			{ "U_OrestesBody", "", 150, "" }, //Arma
			{ "U_C_man_sport_1_F", "", 50, "" }, //Apex
			{ "U_C_man_sport_3_F", "", 50, "" }, //Apex
			{ "U_C_man_sport_2_F", "", 50, "" }, //Apex
			{ "U_C_Man_casual_6_F", "", 50, "" }, //Apex
			{ "U_C_Man_casual_4_F", "", 50, "" }, //Apex
			{ "U_C_Man_casual_5_F", "", 50, "" } //Apex
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_CrewHelmetHeli_B", "Hazmat Breather", 350, "" }, //Arma
			{ "H_Bandanna_gry", "", 20, "" }, //Arma
			{ "H_Bandanna_blu", "", 20, "" }, //Arma
			{ "H_Bandanna_cbr", "", 20, "" }, //Arma
			{ "H_Bandanna_khk", "", 20, "" }, //Arma
			{ "H_Bandanna_surfer", "", 20, "" }, //Arma
			{ "H_Bandanna_surfer_blk", "", 20, "" }, //Arma
			{ "H_Bandanna_surfer_grn", "", 20, "" }, //Arma
			{ "H_Bandanna_camo", "", 20, "" }, //Arma
			{ "H_Booniehat_khk", "", 50, "" }, //Arma
			{ "H_Cap_oli", "", 50, "" }, //Arma
			{ "H_Construction_headset_orange_F", "", 150, "" }, //Laws Of War
			{ "H_Construction_headset_red_F", "", 150, "" }, //Laws Of War
			{ "H_Construction_headset_vrana_F", "", 150, "" }, //Laws Of War
			{ "H_Construction_headset_yellow_F", "", 150, "" }, //Laws Of War
			{ "H_Hat_blue", "", 50, "" }, //Arma
			{ "H_Hat_brown", "", 50, "" }, //Arma
			{ "H_Hat_grey", "", 50, "" }, //Arma
			{ "H_StrawHat", "", 50, "" }, //Arma
			{ "H_StrawHat_dark", "", 50, "" } //Arma
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Aviator", "", 150, "" }, //Arma
			{ "G_Lady_Blue", "", 50, "" }, //Arma
			{ "G_Respirator_blue_F", "", 150, "" }, //Laws Of War
			{ "G_Respirator_white_F", "", 150, "" }, //Laws Of War
			{ "G_Respirator_yellow_F", "", 150, "" }, //Laws Of War
			{ "G_Shades_Black", "", 150, "" }, //Arma
			{ "G_Shades_Blue", "", 150, "" }, //Arma
			{ "G_Spectacles", "", 150, "" }, //Arma
			{ "G_Sport_Blackred", "", 150, "" }, //Arma
			{ "G_Spectacles_Tinted", "", 150, "" } //Arma
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Safety_blue_F", "", 200, "" }, //Laws Of War
			{ "V_Safety_orange_F", "", 200, "" }, //Laws Of War
			{ "V_Safety_yellow_F", "", 200, "" }, //Laws Of War
			{ "V_Press_F", "", 150, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_AssaultPack_blk", "", 150, "" }, //Arma
			{ "B_AssaultPack_cbr", "", 150, "" }, //Arma
			{ "B_AssaultPack_ocamo", "", 150, "" }, //Arma
			{ "B_Carryall_cbr", "", 300, "" }, //Arma
			{ "B_Carryall_ocamo", "", 300, "" }, //Arma
			{ "B_Carryall_khk", "", 300, "" }, //Arma
			{ "B_Carryall_mcamo", "", 300, "" }, //Arma
			{ "B_Carryall_oli", "", 300, "" }, //Arma
			{ "B_FieldPack_ocamo", "", 150, "" }, //Arma
			{ "B_FieldPack_khk", "", 150, "" }, //Arma
			{ "B_FieldPack_oli", "", 150, "" } //Arma
        };
    };
  
    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Scientist", "Radiation Suit", 500, "" },			
			{ "VRP_Cadet1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Deputy1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Senior_Deputy1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Corporal1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Sergeant1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Lieutenant1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Captain1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Major1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Undersheriff1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Sheriff1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Detective1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_SERT1", "", 50, "" } //VolticRP_Clothing
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_CrewHelmetHeli_B", "Hazmat Breather", 350, "" }, //Arma
			{ "VRP_AfroHat", "", 200, "" }, //VolticRP_Clothing
			{ "VRP_TurbanHat", "", 200, "" }, //VolticRP_Clothing
			{ "VRP_Swat_helmet", "", 200, "" }, //VolticRP_Clothing
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Aviator", "", 150, "" }, //Arma
			{ "G_Squares_Tinted", "", 150, "" }, //Arma
			{ "G_Shades_Green", "", 150, "" }, //Arma
			{ "G_Spectacles", "", 150, "" }, //Arma
			{ "G_Balaclava_blk", "", 150, "" } //Arma
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "VRP_Sheriff_Tac_Vest", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_Sheriff_High_Threat_Vest", "", 300, "" } //VolticRP_Clothing
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "VRP_PoliceBelt", "", 150, "" }, //VolticRP_Clothing
			{ "vrpinvisbp", "", 150, "" } //VolticRP_Clothing
        };
    };
  
    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 250, "" } //Arma
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 50, "" } //Arma
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 300, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
  
    class cop_boat {
        title = "STR_Shops_C_Diving";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 200, "" } //Arma
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 10, "" } //Arma
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 100, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_ViperHarness_blk_F", "", 200, "" } //Arma
        };
    };
  
    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_C_Poor_1", "", 50, "" } //Arma
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_Rangemaster_belt", "", 150, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
  
    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "(missionNamespace getVariable ['mav_ttm_var_rebel',0]) isEqualTo 1";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_B_CombatUniform_mcam_worn", "", 200, "" }, //Arma
			{ "U_I_G_Story_Protagonist_F", "", 250, "" }, //Arma
			{ "U_C_WorkerCoveralls", "", 100, "" }, //Arma
			{ "U_I_C_Soldier_Camo_F", "", 300, "" }, //Apex
			{ "U_B_T_Soldier_SL_F", "", 270, "" }, //Apex
			{ "U_B_CombatUniform_mcam_vest", "", 200, "" }, //Arma
			{ "U_I_C_Soldier_Para_1_F", "", 150, "" }, //Apex
			{ "U_I_C_Soldier_Para_4_F", "", 150, "" }, //Apex
			{ "U_I_C_Soldier_Para_3_F", "", 200, "" }, //Apex
			{ "U_I_C_Soldier_Para_2_F", "", 300, "" }, //Apex
			{ "U_BG_leader", "", 200, "" }, //Arma
			{ "U_BG_Guerilla1_2_F", "", 250, "" }, //Laws Of War
			{ "U_BG_Guerilla1_1", "", 250, "" }, //Arma
			{ "U_BG_Guerrilla_6_1", "", 250, "" }, //Arma
			{ "U_B_GhillieSuit", "", 500, "" }, //Arma
			{ "U_O_GhillieSuit", "", 500, "" }, //Arma
			{ "U_I_GhillieSuit", "", 500, "" }, //Arma
			{ "U_I_CombatUniform_shortsleeve", "", 260, "" }, //Arma
			{ "U_I_CombatUniform", "", 240, "" }, //Arma
			{ "U_I_G_resistanceLeader_F", "", 200, "" }, //Arma
			{ "U_B_CombatUniform_mcam_tshirt", "", 200, "" }, //Arma
			{ "U_B_CombatUniform_mcam", "", 240, "" } //Arma
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_Booniehat_khk_hs", "", 150, "" }, //Arma
			{ "H_Booniehat_khk", "", 150, "" }, //Arma
			{ "H_Booniehat_mcamo", "", 150, "" }, //Arma
			{ "H_Booniehat_oli", "", 150, "" }, //Arma
			{ "H_Booniehat_tan", "", 150, "" }, //Arma
			{ "H_Shemag_olive", "", 200, "" }, //Arma
			{ "H_Shemag_olive_hs", "", 200, "" }, //Arma
			{ "H_ShemagOpen_tan", "", 200, "" }, //Arma
			{ "H_ShemagOpen_khk", "", 200, "" }, //Arma
			{ "VRP_skl_msk_black", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_blood", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_can", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_adc", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_fire", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_fran", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_frost", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_GOW", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_german", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_grey", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_irish", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_nirish", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_o", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_pun", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_p", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_redranger", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_red", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_grn", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_scot", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_UK", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_US", "", 300, "" }, //VolticRP_Clothing
			{ "VRP_skl_msk_weed", "", 300, "" } //VolticRP_Clothing
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Balaclava_blk", "", 150, "" }, //Arma
			{ "G_Balaclava_combat", "", 200, "" }, //Arma
			{ "G_Balaclava_oli", "", 150, "" }, //Arma
			{ "G_Balaclava_TI_blk_F", "", 250, "" }, //Apex
			{ "G_Balaclava_TI_G_blk_F", "", 250, "" } //Apex
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "k_hrebel_1", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_10", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_2", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_3", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_4", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_5", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_6", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_7", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_8", "", 300, "" }, //VolticRP_Clothing
			{ "k_hrebel_9", "", 300, "" }, //VolticRP_Clothing
			{ "k_rebel_1", "", 300, "" }, //VolticRP_Clothing
			{ "k_rebel_2", "", 300, "" }, //VolticRP_Clothing
			{ "k_rebel_3", "", 300, "" }, //VolticRP_Clothing
			{ "k_rebel_4", "", 300, "" }, //VolticRP_Clothing
			{ "k_rebel_5", "", 300, "" }, //VolticRP_Clothing
			{ "V_HarnessO_brn", "", 250, "" }, //Arma
			{ "V_HarnessO_gry", "", 250, "" }, //Arma
			{ "V_TacVest_blk", "", 300, "" }, //Arma
			{ "V_TacVest_brn", "", 300, "" }, //Arma
			{ "V_TacVest_camo", "", 300, "" }, //Arma
			{ "V_TacVest_khk", "", 300, "" }, //Arma
			{ "V_TacVest_oli", "", 300, "" }, //Arma
			{ "G_Balaclava_blk", "", 150, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_Carryall_cbr", "", 158, "" }, //Arma
			{ "B_Carryall_ocamo", "", 158, "" }, //Arma
			{ "B_Carryall_oli", "", 158, "" }, //Arma
			{ "O_HMG_01_weapon_F", "", 240, "" }, //Arma
			{ "I_GMG_01_high_weapon_F", "", 240, "" }, //Arma
			{ "O_GMG_01_high_weapon_F", "", 240, "" }, //Arma
			{ "B_GMG_01_high_weapon_F", "", 240, "" }, //Arma
			{ "O_GMG_01_weapon_F", "", 240, "" }, //Arma
			{ "B_Kitbag_cbr", "", 150, "" }, //Arma
			{ "B_Kitbag_rgr", "", 150, "" }, //Arma
			{ "B_Kitbag_mcamo", "", 150, "" }, //Arma
			{ "B_Kitbag_sgg", "", 150, "" } //Arma
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_C_Scientist", "Radiation Suit", 500, "" }, //Arma
			{ "VRP_EMS9", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Standard_Uniform1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Paramedic1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Command_Uniform1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Asst_Chief1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_Chief1", "", 50, "" } //VolticRP_Clothing
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_CrewHelmetHeli_B", "Hazmat Breather", 350, "" }, //Arma
            { "VRP_medic_helmet", "", 10, "" }, //VolticRP_Clothing
			{ "G_Diving", "", 10, "" } //Arma
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_Aviator", "", 150, "" }, //Arma
			{ "G_Lady_Blue", "", 50, "" }, //Arma
			{ "G_Respirator_blue_F", "", 150, "" }, //Laws Of War
			{ "G_Respirator_white_F", "", 150, "" }, //Laws Of War
			{ "G_Respirator_yellow_F", "", 150, "" }, //Laws Of War
			{ "G_Shades_Black", "", 150, "" }, //Arma
			{ "G_Shades_Blue", "", 150, "" }, //Arma
			{ "G_Spectacles", "", 150, "" }, //Arma
			{ "G_Sport_Blackred", "", 150, "" }, //Arma
			{ "G_Spectacles_Tinted", "", 150, "" } //Arma
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_RebreatherB", "", 100, "" } //Arma
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "vrp_invisbp", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicblue", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicdarkred", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicred", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicwhite", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicyellow2", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicyellow", "", 10, "" }, //VolticRP_Clothing
			{ "vrpmedicz", "", 10, "" } //VolticRP_Clothing
        };
    };
  
    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_C_Driver_1_black", "", 150, "" }, //Arma
			{ "U_C_Driver_1_blue", "", 150, "" }, //Arma
			{ "U_C_Driver_2", "", 150, "" }, //Arma
			{ "U_C_Driver_1", "", 150, "" }, //Arma
			{ "U_C_Driver_1_green", "", 150, "" }, //Arma
			{ "U_C_Driver_1_orange", "", 150, "" }, //Arma
			{ "U_C_Driver_1_red", "", 150, "" }, //Arma
			{ "U_C_Driver_3", "", 150, "" }, //Arma
			{ "U_C_Driver_4", "", 150, "" }, //Arma
			{ "U_C_Driver_1_white", "", 150, "" }, //Arma
			{ "U_C_Driver_1_yellow", "", 150, "" } //Arma
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_RacingHelmet_1_black_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_blue_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_2_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_green_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_orange_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_red_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_3_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_4_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_white_F", "", 150, "" }, //Arma
			{ "H_RacingHelmet_1_yellow_F", "", 150, "" } //Arma
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    //GANG
    //The Janitors
    class gang1 {
        title = "";
        conditions = "_uid = getPlayerUID player; _uid isEqualTo '76561198135204695' || _uid isEqualTo '76561198317178194'";

        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "VRP_janitorblack1", "", 50, "" }, //VolticRP_Clothing
			{ "VRP_janitorwhite1", "", 50, "" } //VolticRP_Clothing
        };
		headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "VRP_janitorcap", "", 20, "" }, //VolticRP_Clothing
            { "VRP_mexicanhat", "", 20, "" } //VolticRP_Clothing
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
		backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "vrp_invisbp", "", 10, "" } //VolticRP_Clothing
        };
    };
};
