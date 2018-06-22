/*
 File: fn_spawnConfirm.sqf
 Author: Bryan "Tonic" Boardwine
 Description:
 Spawns the player where he selected.
*/
private["_spCfg","_sp","_spawnPos"];
closeDialog 0;
cutText ["","BLACK IN"];
player cameraEffect ["terminate","back"];
camDestroy _camera;
if (life_spawn_point isEqualTo []) then {
 private["_sp","_spCfg"];
 _spCfg = [playerSide] call life_fnc_spawnPointCfg;
 _sp = _spCfg select 0;
 if (playerSide == civilian) then {
 if (isNil {(call compile format["%1", _sp select 0])}) then {
 player setPos (getMarkerPos (_sp select 0));
 } else {
 _spawnPos = (call compile format["%1", _sp select 0]) call BIS_fnc_selectRandom;
 _spawnPos = _spawnPos buildingPos 0;
 player setPos _spawnPos;
 };
 } else {
 player setPos (getMarkerPos (_sp select 0));
 };
 titleText[format["%2 %1",_sp select 1,localize "STR_Spawn_Spawned"],"BLACK IN"];
} else {
 if (playerSide == civilian) then {
 if (isNil {(call compile format["%1",life_spawn_point select 0])}) then {
 if (["house",life_spawn_point select 0] call BIS_fnc_inString) then {
 private["_bPos","_house","_pos"];
 _house = nearestObjects [getMarkerPos (life_spawn_point select 0),["House_F"],10] select 0;
 _bPos = [_house] call life_fnc_getBuildingPositions;
 if (_bPos isEqualTo []) exitWith {
 player setPos (getMarkerPos (life_spawn_point select 0));
 };
 {_bPos = _bPos - [(_house buildingPos _x)];} forEach (_house getVariable ["slots",[]]);
 _pos = _bPos call BIS_fnc_selectRandom;
 player setPosATL _pos;
 } else {
 player setPos (getMarkerPos (life_spawn_point select 0));
 };
 } else {
 _spawnPos = (call compile format["%1", life_spawn_point select 0]) call BIS_fnc_selectRandom;
 _spawnPos = _spawnPos buildingPos 0;
 player setPos _spawnPos;
 };
 } else {
 player setPos (getMarkerPos (life_spawn_point select 0));
 };
 titleText[format["%2 %1",life_spawn_point select 1,localize "STR_Spawn_Spawned"],"BLACK IN"];
};
if (life_firstSpawn) then {
 life_firstSpawn = false;
 	createDialog "RscDisplayServerInfoMenu";
};
[] call life_fnc_playerSkins;
[] call life_fnc_hudSetup;

if (playerSide isEqualTo civilian) then {
	life_civGang = group player; 
};


_zone1 = getMarkerPos "safezone_reb1";
_zone2 = getMarkerPos "safezone_Don";
_zone3 = getMarkerPos "safezone_Spawn";
_zone4 = getMarkerPos "safezone_air";
_zone5 = getMarkerPos "safezone_Leport";
_zone6 = getMarkerPos "safezone_Passagne";
_zone7 = getMarkerPos "safezone_Trinite";


_zone1dis = 200;
_zone2dis = 100;
_zone3dis = 100;
_zone4dis = 100;
_zone5dis = 100;
_zone6dis = 100;
_zone7dis = 100;

safezone = ((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone6dis) || (_zone3 distance player < _zone6dis) || (_zone7 distance player < _zone7dis));