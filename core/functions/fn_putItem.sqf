/*
    stopping them dupers one step at a time
*/
[3] call SOCK_fnc_updatePartial;

if !(life_putItem) then {
life_putItem = true;
uiSleep 10;
life_putItem = false;
} else { hint "2";
};