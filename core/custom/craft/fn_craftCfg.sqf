#include "..\..\script_macros.hpp"

/*
	File: fn_craftCfg.sqf
	Author: EdgeKiller

	Description:
	Master configuration file for the crafting menu.

*/
private["_craft","_return"];
if (!alive player) then  {
	closeDialog 0;
	_return = false;
	["You're dead",false,"slow"] call life_fnc_notificationSystem;
	} else {

_craft = [_this,0,"",[""]] call BIS_fnc_param;
if(_craft isEqualTo "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_craft) do
{
	case "weapon":
	{
		_return = [
				//handguns
				["bnae_saa_c_virtual", ["steel",8,"barrel",1,"trigger",1], 4000], 
				["RH_python", ["steel",8,"barrel",1,"trigger",1], 4000], 
				["arifle_SDAR_F", ["steel",15,"barrel",2,"trigger",1], 5500], 
				["RH_vz61", ["steel",15,"barrel",1,"trigger",1], 6000], 
				["KA_Glock_18", ["steel",11,"barrel",1,"trigger",1], 7000], 

				//meh
				//["", ["steel",13,"barrel",2,"trigger",1,"butt",2], 10], 
				//["", ["steel",14,"barrel",4,"trigger",1,"butt",5], 10], 
				
				//rifles
				["KA_RO991", ["steel",8,"barrel",2,"trigger",1,"butt",2], 30000], 
				["RH_M16A4", ["steel",11,"barrel",3,"trigger",1,"butt",4,"sight",3], 45000], 
				["hlc_rifle_ACR_SBR_green", ["steel",12,"barrel",4,"trigger",1,"butt",4,"sight",2], 55000], 
				["RH_Mk12mod1", ["steel",12,"barrel",3,"trigger",1,"butt",5,"sight",4], 55000], 
				["hlc_rifle_auga3_bl", ["steel",12,"barrel",3,"trigger",1,"butt",5,"sight",4], 65000], 
				["hlc_rifle_awmagnum", ["steel",12,"barrel",3,"trigger",1,"butt",5,"sight",4,"plans",1], 80000]
        ];
	};

    case "vehicle":
    {
		_return = [
			];
    };

	case "uniform":
	{
         _return = [
				["U_O_Wetsuit",["cloth",5,"rubber",3], 10], 
				["U_O_CombatUniform_oucamo",["cloth",11], 10]
        ];
	};

	case "backpack":
	{
        _return = [
				["B_AssaultPack_cbr",["cloth",10], 10], 
				["B_Kitbag_mcamo",["cloth",12], 10], 
				["B_TacticalPack_oli",["cloth",9], 10], 
				["B_FieldPack_ocamo",["cloth",9], 10], 
				["B_Bergen_sgg",["cloth",10], 10], 
				["B_Kitbag_cbr",["cloth",9], 10], 
				["B_Carryall_oli",["cloth",16], 10], 
				["B_Carryall_khk",["cloth",16], 10]
			];
	};

	case "item":
	{
        _return = [
				["lockpick",["iron_refined",2], 10], 
				["pickaxe",["iron_refined",2,"rubber",1], 10], 
				["morphine",["rubber",1,"monsterEnergy",1], 10], 
				["pdrill",["steel",5,"iron_refined",3], 10], 
				["fuelFull",["iron_refined",1,"oil_processed",3], 10], 
				["blastingcharge",["cloth",4,"C4",5,"trigger",1], 7000], 
				["goldenbarz3",["goldcoin",63,"waterBottle",7,"pliers",1,"salt_refined",13], 10], 
				["storagesmall",["steel",10,"iron_refined",8], 10]
      ];
	};

    case "vest":
    {
        _return = [
				["V_PlateCarrier2_rgr",["cloth",13,"steelplate",2], 4000], 
				["V_PlateCarrierIAGL_dgtl",["cloth",16,"steelplate",3], 5000], 
				["V_HarnessOGL_gry",["cloth",28,"C4",12,"trigger",1], 20000]
        ];
    };
    case "ammo":
    {
        _return = [
				["6Rnd_357M_Magazine",["steel",1,"gunpowder",2], 10], 
				["20Rnd_556x45_UW_mag",["steel",1,"gunpowder",4], 10], 
				["RH_6Rnd_357_Mag",["steel",1,"gunpowder",2], 10], 
				["RH_20Rnd_32cal_vz61",["steel",1,"gunpowder",4], 10], 
				["KA_17Rnd_9x19_Mag",["steel",1,"gunpowder",2], 10], 
				["RH_6Rnd_357_Mag",["steel",1,"gunpowder",2], 10], 
				["KA_32Rnd_9x19_FMJ_Mag",["steel",2,"gunpowder",5], 10], 

				["RH_30Rnd_556x45_M855A1",["steel",3,"gunpowder",8], 10], 
				["RH_30Rnd_556x45_Mk262",["steel",2,"gunpowder",5], 10], 
				["hlc_30rnd_556x45_EPR",["steel",2,"gunpowder",5], 10], 
				["hlc_30Rnd_556x45_B_AUG",["steel",2,"gunpowder",5], 10],
				//["KA_32Rnd_9x19_FMJ_Mag",["steel",2,"gunpowder",5], 10], 
				//["KA_32Rnd_9x19_FMJ_Mag",["steel",2,"gunpowder",5], 10],
				["hlc_5rnd_300WM_mk248_AWM",["steel",4,"gunpowder",15], 3000]

				//["",["steel",1,"gunpowder",2]]
				//["APERSTripMine_Wire_Mag",["steel",3,"gunpowder",8,"sulfur",8,"C4",3]]
      	];
    };

    case "attach":
    {
        _return = [
				["optic_Aco",["sight",1,"iron_refined",1], 10], 
				["optic_Aco_grn",["sight",1,"iron_refined",1], 10], 
				["optic_MRCO",["sight",1,"iron_refined",3], 5000], 
				["optic_MRD",["sight",1,"iron_refined",1], 10],
				["KA_Elcan_black",["sight",3,"iron_refined",5], 9000]
			];
		};
	};
	_return;
};
