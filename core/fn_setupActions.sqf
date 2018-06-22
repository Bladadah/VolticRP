/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
if (isNil{life_actions}) then {life_actions = [];};

switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];
        // Suicide Bomb
	    life_actions = life_actions + [player addAction["<t color='#FF0000'>Activate Suicide Vest</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting") && !life_suicidedeadman']];
        //Gang
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
        //job
        life_actions = life_actions + [player addAction ["Repair Near Objects",ADTC_fnc_Repair,"",0,false,false,"",'(player getVariable ["Job",""] == "Repair") &&(isnull objectParent player) ']];
        //ziptie
        life_actions = life_actions + [player addAction["Tie up player",life_fnc_tieingAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && (cursorObject getVariable ["playerSurrender",false]) || animationState cursorObject == "Incapacitated"']];
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Deadman Switch</t>",life_fnc_DeadmanSwitch,"",0,false,false,"", '((vest player in ["V_HarnessOGL_gry"])) && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting") && !life_isSuiciding']];
        //HouseProcess
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Start Processing</t>",life_fnc_processHouse,"",0,false,false,"",' ((typeOf cursorTarget) == "Land_Portable_generator_F") ']];
    };  
    case west: {
		life_actions = life_actions + [player addAction ["Remove Police Barrier",life_fnc_removePlaceable,"",0,false,false,"",'!isNull cursorTarget && (playerSide == west) && (cursorTarget getVariable ["placeable",false]) && !(animationState cursorTarget == "Incapacitated") && !(player getVariable["restrained",false])']];
		life_actions = life_actions + [(player addAction["Seize Items In Area",{[] call life_fnc_seizeWeapon},cursorTarget,0,false,false,"",'(count(nearestObjects [player,["weaponholder"],3])>0)'])];
    };
    case independent: { 
    };
};


life_actions = life_actions +  [(player addAction["<t color = '#009900'>Put on Seatbelt</t>",life_fnc_seatbelt,"",6,false,false,"",' !life_seatbelt && vehicle player != player '])];
life_actions = life_actions +  [(player addAction["<t color = '#ff3300'>Remove Seatbelt</t>",life_fnc_seatbelt,"",6,false,false,"",' life_seatbelt && vehicle player != player '])];

//Dragging
//life_actions pushBack (player addAction["<t color = '#3366ff'>Hide Body</t>",life_fnc_hideBody,"",6,false,false,"",'cursorTarget isKindOf "Man" && !(cursorTarget isKindOf "Animal") && {!alive cursorTarget}']);



//ID Cards	
life_actions = life_actions + [player addAction["View ID",{[cursorTarget, (cursorTarget getVariable ["persoRangBez","# UNDEFINIERT #"])] call fvs_fnc_zeigePerso;},"",0,false,false,"",'
isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1) && !(player getVariable ["restrained",false]) && (cursorTarget getVariable ["restrained",false])']];
	
life_actions = life_actions + [player addAction["Show ID",{[player, (player getVariable ["persoRangBez","# UNDEFINIERT #"])] remoteExecCall ["fvs_fnc_zeigePerso",cursorTarget];},"",0,false,false,"",'
isPlayer cursorTarget && alive cursorTarget && (player distance cursorTarget < 3) && (speed player < 1 && speed cursorTarget < 1)']];


//life_actions pushBack (player addAction["<t color = '#ffff1a'>Eject and parachute</t>",life_fnc_paraChute,"",7,false,false,"",' vehicle player != player ']);
