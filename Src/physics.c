#include <cprocessing.h>
#include "ObjectFunction.h"
#include <stdio.h>
#include <stdlib.h>

void PlayerGravity(playerO* obj)
{
	float force = obj->mass * CP_System_GetDt() * 5;
	float location = obj->y - force;

	if (location < winY - obj->size)
	{
		obj->y += force;
	}
}

void ObjectGravity(Object* obj)
{
	float force = 20 * CP_System_GetDt() * 5;
	float location = obj->y - force;

	obj->y += force;
	if (location > winY)
	{
		return;
	}
}

void Acceleration(int velocity)
{

}

void velocity(int speed)
{

}

void Jump()
{

}

void pendulum()
{

}