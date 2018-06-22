#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_part","",[""]],
    ["_damage",0,[0]],
    ["_source",objNull,[objNull]],
    ["_projectile","",[""]],
    ["_index",0,[0]]
];
_currdamage = damage player;
_olddmg = _damage;
//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        if (currentWeapon _source in ["CSW_M26C","CG_TELBAT"] && _projectile in ["CSW_Taser_Ammo","non_Swing"]) then {
            //if(_projectile in ["repentz_Taserb_26","JM_26_taser","B_556x45_dual"] && _curWep in ["JM_Taser_26","JM_Taserb_26","arifle_SDAR_F"]) then {
            _damage = 0;
            if (!life_istazed && !life_isknocked) then {
                private ["_distance"];
                _distance = 35;
                if (_projectile == "B_556x45_dual") then {_distance = 100;};
                if (_unit distance _source < _distance) then {
                    if !(isNull objectParent player) then {
                        if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                            player action ["Eject",vehicle player];
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    } else {
                        [_unit,_source] spawn life_fnc_tazed; 
                    };
                };
            };
        };
    };
};




if (safezone) then {
	if (isNull _source) exitWith {_damage = 0;};
	if (_projectile isEqualTo "Bo_Mk82") exitWith {};
	if (isPlayer _source) then {
        if ((side _source) isEqualTo (side _unit)) then {
			_damage = 0;
        };
    } else {
		// Player took damage from something else than a player, not taking damage.
		_damage = 0;
	};

	if (_projectile isEqualTo "") exitWith {_damage = 0;};

};



if (vehicle _unit == _unit) then {
    if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Motorcycle" OR _source isKindOf "Boat" OR _source isKindOf "Tank" ) then {
    	
    } else {
        _isVehicle = vehicle _source;
        if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat" OR _isVehicle isKindOf "Motorcycle" OR _isVehicle isKindOf "Tank") then
        {
            if (driver _isVehicle == _source ) then {
                _damage = _currdamage;
            };
        };
    };
};


if ((vehicle _unit) isKindOf "Car" && (isNull _source || _source isEqualTo _unit)) then
{
	_damage = if (life_seatbelt) then { _damage / 2 } else { _damage};
};

[] spawn life_fnc_hudUpdate;
_damage;
