/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/

/*
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_oldGear = life_repentz_cop_gear;
_uniform = _oldGear select 0;
_uniformItems = (_oldGear select 1) select 0;
_vest = _oldGear select 2;
_vestItems = (_oldGear select 3) select 0;
_backpack = _oldGear select 4;
_backpackItems = (_oldGear select 5) select 0;
_headGear = _oldGear select 6;
_goggles = _oldGear select 7;
_secondaryWeapon = _oldGear select 8;
_secondaryWeaponItems = (_oldGear select 9) select 0;

player addUniform _uniform;
player addVest _vest;
player addBackpack _backpack;
player addHeadGear _headGear;
player addGoggles _goggles;
player addWeapon _secondaryWeapon;
player addWeapon "CG_TELBAT";
player addMagazine "nonlethal_swing";
player addWeapon "CSW_M26C";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";

[true,"panicbutton",1] call life_fnc_handleInv;
[true,"handcuffs",1] call life_fnc_handleInv;
[true,"keys",1] call life_fnc_handleInv;
[true,"toolkit",1] call life_fnc_handleInv;
[true,"donuts",2] call life_fnc_handleInv;
[true,"waterBottle",2] call life_fnc_handleInv;
[true,"spikeStrip",1] call life_fnc_handleInv;
[true,"morphine",3] call life_fnc_handleInv;
[true,"defibrillator",1] call life_fnc_handleInv;


//ITEMS
player linkItem "tf_anprc152";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemGPS";

{
	player addWeaponItem [secondaryWeapon player,_x];
} foreach _secondaryWeaponItems;

{
	player addItemToUniform _x;
} foreach _uniformItems;

{
	player addItemToVest _x;
} foreach _vestItems;

{
	player addItemToBackpack _x;
} foreach _backpackItems;

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
*/



/*
	File: fn_copLoadout.sqf
	
	Edited: VolticRP
	
	Description:
	Loads the cops out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "VRP_Cadet1";
player addBackpack "VRP_PoliceBelt";
player addWeapon "CG_TELBAT";
player addMagazine "nonlethal_swing";
//ITEMS
player linkItem "tf_anprc152";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemGPS";

[true,"panicbutton",1] call life_fnc_handleInv;
[true,"handcuffs",1] call life_fnc_handleInv;
[true,"keys",1] call life_fnc_handleInv;
[true,"toolkit",1] call life_fnc_handleInv;
[true,"donuts",2] call life_fnc_handleInv;
[true,"waterBottle",2] call life_fnc_handleInv;
[true,"spikeStrip",1] call life_fnc_handleInv;
[true,"morphine",3] call life_fnc_handleInv;
[true,"defibrillator",1] call life_fnc_handleInv;

[] call life_fnc_saveGear;
