#include "Object.h"
#include <vector>

using std::vector;
using namespace tle;

vector<Object*> _objects;

Object* CreateObject( IMesh* mesh, float x, float y, float z )
{
	Object* obj = new Object( x, y, z, mesh );
	_objects.push_back( obj );
	return obj;
}

void RemoveObject( Object* obj )
{
	for ( int i = 0; i < _objects.size(); i++ )
	{
		if (_objects[i] == obj)
		{
			delete obj;
			_objects.erase( _objects.begin() + i );
			break;
		}
	}
}

Object::Object( float x, float y, float z, IMesh* mesh )
{
	this->m_ParentMesh = mesh;
	this->m_Model = mesh->CreateModel( x, y, z );
}

Object::~Object()
{
	this->m_ParentMesh->RemoveModel( this->m_Model );
}