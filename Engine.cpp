#include "Engine.h"

tle::I3DEngine* _active_engine = NULL;

tle::I3DEngine* GetEngine()
{
	return _active_engine;
}

void SetEngine( tle::I3DEngine* e )
{
	_active_engine = e;
}