#include "..\..\..\script_macros.hpp"
/*
 Created by repentz
*/

params [
    ["_vehicle",objNull,[objNull]]
];

private ["_payCheck"];

_payCheck = selectRandom [6500,7000,7250,7500,8000,8500,10000];

civRDM = civRDM + _payCheck;
hint format ["Congratulations, you have completed the transportation mission and recived the reward of $%1. Enjoy!", [_payCheck] call life_fnc_numberText];

["civMission"] spawn mav_ttm_fnc_addExp;
player removeAction life_collectMoneys;
player setVariable ["taskStartCiv",false,true];
