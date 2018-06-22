#include "..\..\script_macros.hpp"
/*
    File: fn_question#
    Author: Repentz

    Description:
    DMV shit
*/
closeDialog 0;
[player,"TestFailure"] remoteexeccall ["say3D",0];
if (isPlayer _unit) exitwith {["You have failed your test, please read our rules!",false,"slow"] call life_fnc_notificationSystem;};
