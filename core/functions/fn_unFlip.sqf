params [
    ["_vehicle",objNull,[objNull]]
];

if (isNull _vehicle) exitWith {};
if ((player distance _vehicle) >= 8) exitWith {}; 

private ["_pos","_dir"];
_dir = getDir _vehicle;
_pos = getPosATL _vehicle;
_pos set [2,(_pos select 2) + 1];

_vehicle setPosATL _pos;
_vehicle setVectorUp [0,0,-1];
_vehicle setDir _dir;