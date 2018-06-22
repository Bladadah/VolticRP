player setDamage 0.9;
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

[] call SOCK_fnc_updateRequest;

disableUserInput true;

playSound "flashbang";
uiSleep 1;
playSound "flashbang";
uiSleep 1;
playSound "flashbang";
uiSleep 15;

disableUserInput false;
