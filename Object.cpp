#include "Object.h"
#include "Engine.h"
#include <vector>
#include <map>

using std::vector;
using std::map;
using std::pair;
using namespace tle;

// Object Creation

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

// Object Meshes
map< string, IMesh* > _object_meshes;

IMesh* FindObjectMesh( string name )
{
	map<string, IMesh*>::iterator result = _object_meshes.find( name );
	if ( result == _object_meshes.end() )
	{
		I3DEngine* engine = GetEngine();
		IMesh* temp_mesh = engine->LoadMesh( name.c_str() );

		_object_meshes.insert( pair< string, IMesh* >( name, temp_mesh ) );
		return temp_mesh;		
	}
	else
	{
		return (IMesh*)result->second;
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

void Object::SetRotation( float x, float y, float z )
{
	this->m_Model->ResetOrientation();
	this->m_Model->RotateLocalX( x );
	this->m_Model->RotateLocalY( y );
	this->m_Model->RotateLocalZ( z );
}