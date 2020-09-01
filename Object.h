#ifndef OBJECT_H
#define OBJECT_H
#include "Vector.h"
class Object
{
	public:
		Vector location;
		const float mrad; // Mazimum Radius for purpose of collision detection
		Vector * shape;
		const int verts;
		const float mass;
		const float moment;
		Vector acc;
		Vector accel();
		Vector vel;
		float a_accel;
		float a_vel;
		void updatePos(float time);
		Object(int verts, Vector verticies[], float density);
		~Object();

};
#endif




