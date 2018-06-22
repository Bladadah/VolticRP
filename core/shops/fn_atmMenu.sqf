#include "..\..\script_macros.hpp"
/*
    File: fn_atmMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens and manages the bank menu.
*/
private ["_units","_type","_side"];



if (!life_use_atm) exitWith {
    hint format [localize "STR_Shop_ATMRobbed",(LIFE_SETTINGS(getNumber,"noatm_timer"))];
};

if (!dialog) then {
    if (!(createDialog "Life_atm_management")) exitWith {};
};

disableSerialization;
_units = CONTROL(2700,2703);

lbClear _units;
CONTROL(2700,2701) ctrlSetStructuredText parseText format ["<t color='#4d4d4d' t align='left' size='1' shadow='0'>%1</t>",[civRDM] call life_fnc_numberText];
CONTROL(2700,2706) ctrlSetStructuredText parseText format ["<t color='#4d4d4d' t align='left' size='1' shadow='0'>%1</t>",[civRDMed] call life_fnc_numberText];

{
    _side = "None";
 switch (side _x) do {
        case west: {_side = "Cop"};
        case civilian: {_side = "Civ"};
        case independent: {_side = "EMS"};
    };

_index = lbAdd [2703, format ["%1 - %2",  _side,  name _x]];
lbSetData [2703, _index, str _x];
} forEach allPlayers;


/*
{
    _name = _x getVariable ["realname",name _x];
    if (alive _x && (!(_name isEqualTo profileName))) then {
        switch (side _x) do {
            case west: {_type = "Cop"};
            case civilian: {_type = "Civ"};
            case independent: {_type = "EMS"};
        };
        _units lbAdd format ["%1 (%2)",_x getVariable ["realname",name _x],_type];
        _units lbSetData [(lbSize _units)-1,str(_x)];
    };
} forEach playableUnits;
*/
lbSetCurSel [2703,0];
/*
if (isNil {(group player getVariable "gang_bank")}) then {
    (CONTROL(2700,2705)) ctrlEnable false;
    (CONTROL(2700,2706)) ctrlEnable false;
};
*/