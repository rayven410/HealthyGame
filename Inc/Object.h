#include <cprocessing.h>

#ifndef Objects
#define Objects

//Cause i lazy keep typing the cp function
#define mouseX CP_Input_GetMouseX()
#define mouseY CP_Input_GetMouseY()
#define winX CP_System_GetWindowWidth()
#define winY CP_System_GetWindowHeight()

enum foodstate { NONE = 0, GOOD = 1, BAD = 2 };

//struct classes
typedef struct Button {
	int x , y , width , height;
	char* text;
	CP_Color Color;
}Button;

typedef struct Object {
	int x, y;
	enum foodstate state;
	struct Object* next;
}Object;

typedef struct player {
	int x, y, size, mass;
	CP_Color color;
}playerO;


#endif // !Object
