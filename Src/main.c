#include <cprocessing.h>
#include "main_menu.h"

int main(void)
{
    CP_Engine_SetNextGameState(main_menu_Init, main_menu_Update, main_menu_Exit);
    CP_Engine_Run();
    
    return 0;
}