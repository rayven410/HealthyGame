#include <cprocessing.h>
#include <Object.h>

void SpawnPlayer(const playerO* player)
{
	CP_Settings_Fill(player->color);
	CP_Graphics_DrawCircle(player->x, player->y, player->size);
}

void playerControl(playerO* player)
{
	if (CP_Input_KeyDown(KEY_A))
	{
		player->x -= 5;
	}

	if (CP_Input_KeyDown(KEY_D))
	{
		player->x += 5;
	}

	if (CP_Input_KeyTriggered(KEY_SPACE))
	{
		player->y -= 100;
	}
}