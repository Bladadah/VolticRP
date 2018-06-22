#include "..\..\script_macros.hpp"
/*
    File: fn_onFired.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles various different ammo types being fired.
*/
private ["_ammoType","_projectile","_curGun","_holder"];
_ammoType = _this select 4;
_projectile = _this select 6;

if (_ammoType isEqualTo "GrenadeHand_stone") then {
    _projectile spawn {
        private "_position";
        while {!isNull _this} do {
            _position = ASLtoATL (visiblePositionASL _this);
            sleep 0.1;
        };
        [_position] remoteExec ["life_fnc_flashbang",RCLIENT];
    };
};



//Teargas
if(_ammoType in ["SmokeShellGreen","G_40mm_SmokeGreen"]) then {
	[_projectile] remoteExec ["life_fnc_teargas",0];
};