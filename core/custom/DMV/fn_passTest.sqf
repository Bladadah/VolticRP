#include "..\..\script_macros.hpp"
/*
    File: fn_question#
    Author: Repentz

    Description:
    DMV shit
*/


license_civ_driver = true;
["DMV"] spawn mav_ttm_fnc_addExp;

[player,"TestComplete"] remoteexeccall ["say3D",0];

if (isPlayer _unit) exitwith {["Congratulations! You have passed the test! You can now buy any land vehicle, drive responsibly!",false,"slow"] call life_fnc_notificationSystem;};
closeDialog 0;
[2] call SOCK_fnc_updatePartial;