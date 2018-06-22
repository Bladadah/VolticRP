#include "..\..\script_macros.hpp"
/*
    File: fn_civRDMedDeposit.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Figure it out.
*/
private ["_value"];
_value = parseNumber(ctrlText 2702);

//Series of stupid checks
if (_value > 999999) exitWith {hint localize "STR_ATM_GreaterThan";};
if (_value < 0) exitWith {};
if ((time - life_action_delay) < 2) exitWith {[localize "STR_NOTF_ActionDelay",true,"slow"] call life_fnc_notificationSystem;};
if (!([str(_value)] call TON_fnc_isnumber)) exitWith {hint localize "STR_ATM_notnumeric"};
if (_value > civRDM) exitWith {hint localize "STR_ATM_NotEnoughcivRDM"};

civRDM = civRDM - _value;
civRDMed = civRDMed + _value;

hint format [localize "STR_ATM_DepositSuccess",[_value] call life_fnc_numberText];
[] call life_fnc_atmMenu;
[6] call SOCK_fnc_updatePartial;

life_action_delay = time;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_depositedcivRDMed_BEF",_value,[civRDMed] call life_fnc_numberText,[civRDM] call life_fnc_numberText];
    } else {
        money_log = format [localize "STR_DL_ML_depositedcivRDMed",profileName,(getPlayerUID player),_value,[civRDMed] call life_fnc_numberText,[civRDM] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};
