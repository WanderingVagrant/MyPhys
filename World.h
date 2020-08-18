#ifndef WORLD_H
#define WORLD_H
#include "Vector.h"
#include "Object.h"
class World
{
	public:
		Object * objects;
		float air_resistance;
		Vector (*forceField)(Vector);
		void add(Object &o);
		void next();





		
		


};
#endif
