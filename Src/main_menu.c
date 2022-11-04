#include "ObjectFunction.h"
#include "Color.h"
#include "game.h"
#include <cprocessing.h>
#include <stdio.h>

Button playButton , quitButton;
static int width, height;

void main_menu_Init(void)
{
	width = 100;
	height = 50;

	CP_System_SetWindowSize(640, 640);


	playButton.x = winX/2;
	playButton.y = winY/3;
	playButton.width = width;
	playButton.height = height;
	playButton.Color = green;
	playButton.text = "PLAY";

	quitButton.x = winX/ 2;
	quitButton.y = winY/ 2;
	quitButton.width = width;
	quitButton.height = height;
	quitButton.Color = red;
	quitButton.text = "QUIT";
}

void main_menu_Update(void)
{
	CP_Graphics_ClearBackground(black);

	CreateButton(playButton);
	CreateButton(quitButton);

	if (ButtonIsClicked(playButton) && CP_Input_MouseTriggered(MOUSE_BUTTON_LEFT))
	{
		CP_Engine_SetNextGameState(game_Init, game_Update, game_Exit);
	}
}

void main_menu_Exit(void)
{
	CP_Graphics_ClearBackground(CP_Color_Create(255, 255, 255, 0));
}