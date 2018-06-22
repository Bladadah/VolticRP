#include "..\..\script_macros.hpp"
/*
    File: fn_loadDeadGear.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    BLAH
*/
private ["_loadout"];
_loadout = [_this,0,[],[[]]] call BIS_fnc_param;


//Strip the unit down
RemoveAllWeapons player;
{player removeMagazine _x;} forEach (magazines player);
removeUniform player;
removeVest player;
removeBackpack player;
removeGoggles player;
removeHeadGear player;
{
    player unassignItem _x;
    player removeItem _x;
} forEach (assignedItems player);

player setUnitLoadout _loadout;
