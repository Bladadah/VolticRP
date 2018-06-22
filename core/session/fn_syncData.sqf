#include "..\..\script_macros.hpp"
/*
    File: fn_syncData.sqf
    Author: Bryan "Tonic" Boardwine"

    Description:
    Used for player manual sync to the server.
*/
private "_data";
_fnc_scriptName = "Player Synchronization";
if (isNil "life_session_time") then {life_session_time = false;};
if (life_session_time) exitWith {[localize "STR_Session_SyncdAlready",true,"slow"] call life_fnc_notificationSystem;};

_data = getUnitLoadout player;
player setUnitLoadout _data;
//[localize "STR_Session_SyncData",true,"slow"] call life_fnc_notificationSystem;
["Data has been saved to the server.",false,"slow"] call life_fnc_notificationSystem;
[] spawn {
    life_session_time = true;
    sleep (10 * 60);
    life_session_time = false;
};
