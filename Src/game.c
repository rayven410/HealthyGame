#include "Color.h"
#include "ObjectFunction.h"
#include "player.h"
#include "physics.h"
#include <stdlib.h>

Object* fallingObjects = NULL;
playerO* player = NULL;

int timer;

void game_Init(void)
{
	player = malloc(sizeof(playerO));
	if (player)
	{
		player->mass = 20;
		player->size = 50;
		player->x = winX / 2;
		player->y = winY - player->size;
		player->color = black;


		push(&fallingObjects, 500, 100, GOOD);
		push(&fallingObjects, 200, 400, GOOD);
		push(&fallingObjects, 400, 200, BAD);
		push(&fallingObjects, 100, 200, GOOD);

	}

}

void game_Update(void)
{
	CP_Graphics_ClearBackground(white);

	SpawnPlayer(player);
	PlayerGravity(player);
	playerControl(player);

	DrawfallingObjects(&fallingObjects);
}

void game_Exit(void)
{

}

