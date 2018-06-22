helimain setVariable ["selections", []];
helimain setVariable ["gethit", []];

helimain addEventHandler 
[	"HandleDamage",
{
	_unit = _this select 0;
	_selections = helimain getVariable ["selections", []];
	_gethit = helimain getVariable ["gethit", []];
	_selection = _this select 1;
	_projectile = _this select 4;
	if !(_selection in _selections) then
	{
		_selections set [count _selections, _selection];
		_gethit set [count _gethit, 0];
	};
	_i = _selections find _selection;
	_olddmg = _gethit select _i;
	_curdmg = _this select 2;
	if (_projectile == "") then {
		_curdmg;
	}
	else
	{
		_newdmg = _olddmg + (_curdmg - _olddmg) / 6;
		_gethit set [_i, _newdmg];
		_newdmg;
	};
}
];