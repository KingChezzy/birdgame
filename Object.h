#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <TL-Engine.h>

class Object
{
public:
	Object( float x, float y, float z, tle::IMesh* mesh );
	~Object();

	void SetRotation( float x, float y, float z );

private:
	tle::IMesh* m_ParentMesh;
	tle::IModel* m_Model;
};

Object* CreateObject( tle::IMesh* mesh, float x, float y, float z );
void RemoveObject( Object* object );

tle::IMesh* FindObjectMesh( string name );

#endif