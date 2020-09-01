#include "World.h"

World::World (float air, Vector (*forceField)(Vector), float time):
	objects(NULL), air_resistance(air), forceField(forceField), time_step(time)
{
}

World::World (float air, Vector (*forceField)(Vector)):
	objects(NULL), air_resistance(air), forceField(forceField), time_step(100)
{
}

void World::add(Object &o)
{
	}
