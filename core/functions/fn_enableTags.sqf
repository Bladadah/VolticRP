if (param [0, false, [false]]) then {
    life_nameTags = addMissionEventHandler ["Draw3D", {[] call life_fnc_nameTags}];
} else {
    removeMissionEventHandler ["Draw3D", life_nameTags];
    life_nameTags = nil;
};