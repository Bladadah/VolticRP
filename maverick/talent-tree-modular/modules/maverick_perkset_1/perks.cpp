// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 21;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 21 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_4 {
	displayName = "Recoil Compensation 4";
	requiredPerkPoints = 9;
	requiredLevel = 30;
	requiredPerk = "perk_gunsspecialist_lessRecoil_3";
	subtitle = "Level 30 Required, 9 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-25% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_5 {
	displayName = "Recoil Compensation 5";
	requiredPerkPoints = 12;
	requiredLevel = 40;
	requiredPerk = "perk_gunsspecialist_lessRecoil_4";
	subtitle = "Level 40 Required, 12 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-30% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_5.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_1 {
	displayName = "Weapon Sway Control";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 5 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-15% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_2 {
	displayName = "Weapon Sway Control 2";
	requiredPerkPoints = 6;
	requiredLevel = 17;
	requiredPerk = "perk_weaponSway_1";
	subtitle = "Level 17 Required, 6 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-25% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_3 {
	displayName = "Weapon Sway Control 3";
	requiredPerkPoints = 7;
	requiredLevel = 28;
	requiredPerk = "perk_weaponSway_2";
	subtitle = "Level 28 Required, 7 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-30% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_4 {
	displayName = "Weapon Sway Control 4";
	requiredPerkPoints = 10;
	requiredLevel = 40;
	requiredPerk = "perk_weaponSway_3";
	subtitle = "Level 40 Required, 10 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-40% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+20% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+35% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+75% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_4 {
	displayName = "Paycheck 4";
	requiredPerkPoints = 12;
	requiredLevel = 33;
	requiredPerk = "perk_paycheck_3";
	subtitle = "Level 33 Required, 12 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster processing
class perk_processing_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 13;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 13 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_4 {
	displayName = "Processing Speed 4";
	requiredPerkPoints = 5;
	requiredLevel = 17;
	requiredPerk = "perk_processing_3";
	subtitle = "Level 17 Required, 5 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+40% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_5 {
	displayName = "Processing Speed 5";
	requiredPerkPoints = 7;
	requiredLevel = 24;
	requiredPerk = "perk_processing_4";
	subtitle = "Level 24 Required, 7 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+55% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_6 {
	displayName = "Processing Speed 6";
	requiredPerkPoints = 12;
	requiredLevel = 35;
	requiredPerk = "perk_processing_5";
	subtitle = "Level 35 Required, 12 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+75% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_6.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster lockpicking
class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 5;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 7;
	requiredLevel = 23;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 23 Required, 7 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_4 {
	displayName = "Locksmith 4";
	requiredPerkPoints = 9;
	requiredLevel = 29;
	requiredPerk = "perk_locksmith_3";
	subtitle = "Level 28 Required, 9 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+45% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_5 {
	displayName = "Locksmith 5";
	requiredPerkPoints = 12;
	requiredLevel = 36;
	requiredPerk = "perk_locksmith_4";
	subtitle = "Level 36 Required, 12 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+75% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_impoundSpeed_1 {
	displayName = "Impounding";
	requiredPerkPoints = 3;
	requiredLevel = 9;
	requiredPerk = "";
	subtitle = "Level 9 Required, 3 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>50% faster impounding</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_impoundSpeed_1.sqf";
	limitToSides[] = {"WEST","INDEPENDENT"};
	color[] = {1,1,1,1};
};

class functions_impoundSpeed_2 {
	displayName = "Impounding 2";
	requiredPerkPoints = 5;
	requiredLevel = 18;
	requiredPerk = "functions_impoundSpeed_1";
	subtitle = "Level 18 Required, 5 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>100% faster impounding</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_impoundSpeed_2.sqf";
	limitToSides[] = {"WEST","INDEPENDENT"};
	color[] = {1,1,1,1};
};

class functions_repairSpeed_1 {
	displayName = "Repairing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>40% faster repairing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_repairSpeed_2 {
	displayName = "Repairing Speed 2";
	requiredPerkPoints = 4;
	requiredLevel = 9;
	requiredPerk = "functions_repairSpeed_1";
	subtitle = "Level 9 Required, 4 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>75% faster repairing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_rebel_1 {
	displayName = "Rebel Training";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Gain access to the rebel shops for high caliber weapons and gear";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_rebelA {
	displayName = "Advanced Rebel Training";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_rebel_1";
	subtitle = "Advanced Rebel Training";
	description = "Go find all the santa statue locations and return to the advanced rebel weapon seller";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebelA.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_lsd_1 {
	displayName = "LSD Gathering";
	requiredPerkPoints = 3;
	requiredLevel = 6;
	requiredPerk = "";
	subtitle = "Level 6 Required, 3 Perk Points";
	description = "Learn to gather mushrooms to make LSD<br/><br/><t color='#10FF45'>Estimated at 15% more profit than cocaine</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lsd_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_uranium_1 {
	displayName = "Uranium Gathering";
	requiredPerkPoints = 8;
	requiredLevel = 20;
	requiredPerk = "perk_lsd_1";
	subtitle = "Level 20 Required, 8 Perk Points";
	description = "Learn to gather uranium to process and sell for major profit<br/><br/><t color='#10FF45'>Estimated at 45% more profit than cocaine</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_uranium_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_air_1 {
	displayName = "Aviation Training";
	requiredPerkPoints = 2;
	requiredLevel = 6;
	requiredPerk = "";
	subtitle = "Level 6 Required, 2 Perk Points";
	description = "Gain access to the air shops to buy aircraft";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_air_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_gasrobbery_1 {
	displayName = "Armed Robbery";
	requiredPerkPoints = 6;
	requiredLevel = 17;
	requiredPerk = "";
	subtitle = "Level 17 Required, 6 Perk Points";
	description = "Learn to intimidate gas station clerks and banks more efficiently<br/><br/><t color='#10FF45'>+50% faster robbing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gasrobbery_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_home_1 {
	displayName = "Home Ownership";
	requiredPerkPoints = 5;
	requiredLevel = 14;
	requiredPerk = "";
	subtitle = "Level 14 Required, 5 Perk Points";
	description = "Gain the ability to own your own house";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_home_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_crafting_1 {
	displayName = "Crafting";
	requiredPerkPoints = 8;
	requiredLevel = 17;
	requiredPerk = "";
	subtitle = "Level 17 Required, 8 Perk Points";
	description = "Learn the skills required to craft advanced weapons and gear";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_crafting_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_relicReward {
	displayName = "Quest: Collecting Relics";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "Collecting Hidden Relics";
	description = "Bring all the hidden relics around the map (4) to the archeologist <br/><br/><t color='#10FF45'>Reward: 1375 xp</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward.sqf";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};

class functions_relicReward2 {
	displayName = "Quest: Collecting Relics 2";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_relicReward";
	subtitle = "Gold Transport Relic";
	description = "Intercept the gold transport and gather the relic inside the main transport vehicle, bring it to the archeologist <br/><br/><t color='#10FF45'>Reward: 1900 xp</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward2.sqf";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};

class functions_relicReward3 {
	displayName = "Quest: Collecting Relics 3";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_relicReward2";
	subtitle = "Federal Reserve Relic";
	description = "Rob the federal reserve, gather the relic from the reward and bring it to the archeologist <br/><br/><t color='#10FF45'>Reward: 2300 xp and the ability to loot oil rig cargo</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward3.sqf";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};

class functions_satellite {
	displayName = "Quest: Secrets of the depths";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "????????";
	description = "345723.47456Researchasd.234Facilityad234s.csdfSatellite.resdf<br/><br/><t color='#10FF45'>Reward: 3000 xp and the ability to gather ????????</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_satellite.sqf";
	limitToSides[] = {};
	color[] = {0.38,0.05,0,1};
};