#include "Object.h"

#ifndef ObjectF
#define ObjectF

//Function Declaration
CP_BOOL ButtonIsClicked(const Button);
void CreateButton(const Button);
void DrawfallingObjects(Object** headref);
void push(Object** headref, int x, int y, enum foodstate state);
void DeleteNodeFromStart(Object**, int);
void insertAfter(Object*);
void printList(Object*);

#endif // !ObjectF

