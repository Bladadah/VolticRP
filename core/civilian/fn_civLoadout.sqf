/*
    File: fn_civLoadout.sqf
    Author: Tobias 'Xetoxyc' Sittenauer

    Description:
    Loads the civs out with the default gear, with randomized clothing / Edited by Repentz to add custom clothing
*/

/*
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["U_PMC_RedPlaidShirt_DenimCords","U_PMC_WhtPolo_BluPants","U_PMC_WhtPolo_BgPants","U_C_Man_casual_6_F","U_C_man_sport_2_F","KAEL_SUITS_BR_F12","A3L_Zombie"];
//Start Repentz
_repentzHat = ["H_Capbw_pmc","H_Booniehat_grn","Kio_Hat"];
_repentzBackpack = ["EF_FBAG_SG","EF_FBAG_BW","EF_FBAG_SL_BK","EF_FBAG_SL_RD","EF_FBAG_BL","EF_FBAG_BK"];
//_repentzVest = ["V_Press_F","V_I_G_resistanceLeader_F"];

player addHeadgear (selectRandom _repentzHat);
player addBackpack (selectRandom _repentzBackpack);
//player addVest (selectRandom _repentzVest);
//End Repentz
player addUniform (selectRandom _clothings);


//ITEMS
player addItem "tf_anprc152"; 
player assignItem "tf_anprc152";
player linkItem "ItemMap";
player linkItem "ItemCompass";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
*/



/*
	File: fn_civLoadout.sqf
	
	Edited: VolticRP
	
	Description:
	Loads the civs out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
player addUniform "VRP_default1";
//ITEMS
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "tf_anprc152"; 
player assignItem "tf_anprc152";
player addBackpack "B_AssaultPack_cbr";
[] call life_fnc_saveGear;




