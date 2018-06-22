#include "..\..\script_macros.hpp"
/*
    File: fn_question#
    Author: Repentz

    Description:
    DMV shit
*/
private["_busCost"];
if(!alive player) exitWith {hint"You dead homie.. dafuq";};
if(vehicle player != player) exitWith {hint "Please store your vehicle, there will be a garage on the other side";};

_busCost = 1000; //default price for bus teleport
if(civRDM < _busCost) exitWith { hint format ["You dont have cash to write this test, price: $%1", _busCost]; };
civRDM = civRDM - _busCost;
closeDialog 0;

CreateDialog "speedLimitCity";
[0] call SOCK_fnc_updatePartial;