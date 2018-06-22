#include "..\..\script_macros.hpp"
/*
    ALAH SNACKBAR! 
*/
private["_boom", "_list"];
_player = player;
if(vest player != "V_HarnessOGL_gry") exitWith {};
if(life_isSuiciding) exitWith {};
life_isSuiciding = true;
 
[_player,"sVest"] remoteexeccall ["say3D",0];
sleep 8;


if(vest player != "V_HarnessOGL_gry") exitWith {life_isSuiciding = false;};
if((player getVariable "restrained")) exitWith {life_isSuiciding = false;}; //He's restrained.
if((player getVariable "zipted")) exitWith {life_isSuiciding = false;}; //He's restrained.

//BOOM    
removeVest player;
removeAllWeapons player:
removeAllAssignedItems player;
_boom = "Bo_Mk82" createVehicle [0,0,9999];
_boom setPosASL (getPosASL player); // ASL will use height so if they are in the air the bomb will be in the air and not on the floor.
_boom setDamage 1; // Use damage and not velocity to just automatically blow up the bomb.
life_save_gear = [];
if(alive player) then {player setDamage 1;};
["Suicide"] spawn mav_ttm_fnc_addExp;

life_isSuiciding = false;

player setVariable["zipted", false, true];
player setVariable["restrained", false, true];
[] call SOCK_fnc_updateRequest;

[0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
[0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
