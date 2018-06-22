private ["_vehicle"];
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
if (isNull _vehicle) exitWith {};

_vehicle setHitPointDamage ["hitEngine", 1.0];
