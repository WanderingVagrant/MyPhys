#include "World.h"

World::World (float air, Vector (*forceField)(Vector), float time):
	air_resistance(air), forceField(forceField), time_step(time)
{
	objects = new List();
}

World::World (float air, Vector (*forceField)(Vector)):
	air_resistance(air), forceField(forceField), time_step(100)
{
	objects = new List();
}

Object * World::add(Object * o)
{
	return ((Object *) objects->Insert(o, END));
}

void World::next()
{
	collision();
	move();
