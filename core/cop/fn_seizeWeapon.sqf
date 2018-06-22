/*
        File: fn_seizeWeapon.sqf
        Author: Tonic & Repentz
        
        Description:
	Sieze's Objects or Weapons on Ground
*/
/*
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["groundWeaponHolder"],3];
_destroyed = 0;
for "_i" from 0 to count _clear - 1 
do
{
        _destroyed = _destroyed + 1;
        deleteVehicle (_clear select _i);
        uiSleep 0.056;
};
_destroyed = _destroyed - 1;
["You seized the items on the ground",false,"slow"] call life_fnc_notificationSystem;
/*





/*
        File: fn_seizeWeapon.sqf
        Author: Bradley Packard

        Description:
        Allows police to seize weapons/items and adds it to the 'Evidence Locker' for Civilians to raid.
*/

if (playerside != west) exitWith {}; //wtf
if((player getVariable "restrained")) exitWith {};
if((player getVariable "tied")) exitWith {};
//if(koil_antispam == 1) exitWith {}; //just in case
//[] spawn life_fnc_AntiSpam;
_clear = nearestObjects [player,["weaponholder"],3];
_clear = _clear + nearestObjects [player,["groundWeaponHolder"],3];
_cops = west countSide playableUnits;
_seizedno = 0;
if (license_cop_sert) then {
	_cops = 0;
};
if (license_cop_marshals) then {
	_cops = 0;
};
if (_cops < 0) exitWith {
for "_i" from 0 to count _clear - 1
do
{
		_seizedno = _seizedno + 1;
		deleteVehicle (_clear select _i);
        uiSleep 0.056;
		diag_log "Items not sent to box - Nick is a cunt!";
    };
	_seizedno = _seizedno - 1;
	titleText[format["Seized %1 items.", _seizedno],"PLAIN"];
};

for "_i" from 0 to count _clear - 1
do
{
		_seizedno = _seizedno + 1;
		_harveyisacunt = _clear select _i;
		_mags = getMagazineCargo _harveyisacunt;
		_items = getItemCargo _harveyisacunt;
		_weapons = getWeaponCargo _harveyisacunt;
		clearBackpackCargo _harveyisacunt;


		if (count (_mags select 0) > 0) then {{seize_box addMagazineCargoGlobal [_mags select 0 select _forEachIndex,_mags select 1 select _forEachIndex]} forEach (_mags select 0); clearMagazineCargo _harveyisacunt;};
		if (count (_items select 0) > 0) then {{seize_box addItemCargoGlobal [_items select 0 select _forEachIndex,_items select 1 select _forEachIndex]} forEach (_items select 0); clearItemCargo _harveyisacunt; };
		if (count (_weapons select 0) > 0) then {{seize_box addWeaponCargoGlobal [_weapons select 0 select _forEachIndex,_weapons select 1 select _forEachIndex]} forEach (_weapons select 0);  clearWeaponCargo _harveyisacunt; };
        deleteVehicle (_clear select _i);
        uiSleep 0.056;
};

_seizedno = _seizedno - 1;
titleText[format["Seized %1 items.", _seizedno],"PLAIN"];
