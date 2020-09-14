#ifndef WORLD_H
#define WORLD_H
#include "Vector.h"
#include "Object.h"
#include "List.h"
class World
{
	public:
		List * objects;
		float air_resistance;
		Vector (*forceField)(Vector);
		float time_step;
		Object * add(Object * o);
		void next();
		World (float air, Vector (*forceField)(Vector), float time);
		World (float air, Vector (*forceField)(Vector));
		void updateField(Vector (*forceField)(Vector));
		~World();
};
#endif
