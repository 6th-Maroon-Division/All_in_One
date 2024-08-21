params ['_entity','_displayName'];
if (not is3DEN) then
{
    exit;
};

_entity set3DENAttribute ["description", _displayName];