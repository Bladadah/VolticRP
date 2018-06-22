#include "..\script_macros.hpp"
/*
    File: fn_initMedic.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the medic..
*/

tf_no_auto_long_range_radio = true; 

TF_terrain_interception_coefficient = 0.1;
tf_sendingDistanceMultiplicator = 2;
tf_receivingDistanceMultiplicator = 2;

player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_medicLevel)) < 2 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
