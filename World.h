#ifndef WORLD_H
#define WORLD_H
#include "Vector.h"
#include "GameObject.h"
#include "List.h"
class World
{
public:

	//List of GameObjects in the World
	List* GameObjects;

	//The constant for air resistance
	float air_resistance;

	//A function that applies the forcefield of the world to the object
	void (*forceField)(GameObject*);

	//The time_step of the world in ms, how often we caclulate and update each objects pos, accel, vel
	float time_step;

	//Adds the given gameobject to the world
	GameObject* add(GameObject* o);

	//Calculate forces, handle collisions, then move over one time_step
	void next();

	//Constructor that takes in the air resistance, forcefield, and the timestep
	World(void (*forceField)(GameObject*), float air = 0, float time = 100);

	//Updates the forcefield
	void updateField(void (*forceField)(GameObject*));

	//Calculates the forces on the objects
	void forces();

	//Calculates the collision and resolves
	void collision();

	//Moves the objects over one time_step
	void move();

	//Allows printing of the World
	friend ostream& operator<<(ostream& stream, const World& h);

	//Deallocates all memory associated with the world
	~World();
};
#endif