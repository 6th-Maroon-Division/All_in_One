private["_logic", "_units", "_activated"];
_logic=_this select 0;
_units=_this select 1;
_activated=_this select 2;
_exploname=_this select 3;
sleep .1;
if!(isServer)exitWith{};
_activated = _this param [2, true, [true]];

if (_activated) then {
	_this spawn {
		params ["_logic", "_units", "_activated", "_exploname"];

		_pos = getPosATL _logic;
		if !(isNull (attachedTo _logic)) then {
			_pos = getPosATL (attachedTo _logic);
		};
		_dir = _logic getvariable ["dir", random 360];

		_ExploBar = "Land_MetalBarrel_F" createVehicle [0, 0, 0];
		_ExploBar setVariable["explo",_exploname];
		_ExploBar setPosATL _pos;

		_ExploBar addEventHandler ["HandleDamage", {
			0
		}];

		_ExploBar addMPEventHandler ["MPHit", {
			params ["_unit", "_causedBy", "_damage", "_instigator"];
			if !(_instigator in allPlayers) exitWith {
				false
			};
			private _hitCount = (_unit getVariable ["you_hitCount", 0])+1;
			_unit setVariable ["you_hitCount", _hitCount];

			if (_hitCount >1) then {
				_unit removeMPEventHandler ["MPHit", _thisEventHandler];
				_unit spawn {
					private _emitter = "#particlesource" createVehicle position _this;
					_emitter setParticleClass "MediumDestructionFire";
					sleep ((round random 3) +3);

					sleep 0.1;
					_pos = getPosATL _this;
					{
						deleteVehicle _x;
					} forEach [_emitter, _this];
					sleep 0.1;
					if (isServer) then {
						_explosion = createVehicle [_this getVariable ["explo","HelicopterExploSmall"],_pos];
						[[_explosion], 0] call ace_explosives_fnc_scriptedExplosive;
					};
				}
			}
		}];

		deleteVehicle _logic;

		{
			_x addCuratorEditableObjects
			[
				    entities [["Land_MetalBarrel_F"], ["Logic"], true /* Include vehicle crew */, true /* Exclude dead bodies */], 
					    true
				    ];
			} count allCurators;
		};
	};