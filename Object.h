#ifndef OBJECT_H
#define OBJECT_H
#include "Vector.h"
#include "World.h"
class Object
{
	public:
		Vector location;
		const float mrad; // Mazimum Radius for purpose of collision detection
		Vector * shape;
		const float mass;
		const float moment;
		Vector acc;
		Vector accel();
		Vector vel;
		float a_accel;
		float a_vel;
		void updatePos();
		Object(Vector * verticies, float density);
};
#endif




