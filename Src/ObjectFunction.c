#include "object.h"
#include "color.h"
#include <stdio.h>
#include <stdlib.h>

CP_BOOL ButtonIsClicked(const Button check)
{
	int topBoundary = check.y - check.height / 2;
	int btmBoundary = check.y + check.height / 2;

	int leftBoundary = check.x - check.width / 2;
	int rightBoundary = check.x + check.width / 2;

	return (mouseY >= topBoundary) && (mouseY <= btmBoundary) && (mouseX >= leftBoundary) && (mouseX <= rightBoundary) ? TRUE : FALSE;
}

void CreateButton(const Button createButton)
{
	CP_Settings_RectMode(CP_POSITION_CENTER);
	CP_Settings_Fill(createButton.Color);
	CP_Graphics_DrawRect(createButton.x, createButton.y, createButton.width, createButton.height);

    CP_Settings_Fill(black);
    CP_Settings_TextAlignment(CP_TEXT_ALIGN_H_CENTER, CP_TEXT_ALIGN_V_MIDDLE);
    CP_Font_DrawText(createButton.text, createButton.x, createButton.y);
}

void DeleteNodeFromStart(Object** headref, int position)
{

}

void push(Object **headref, int x , int y, enum foodstate state)
{
    Object* new_node = malloc((sizeof(Object)));

    if (new_node)
    {
        new_node->x = x;
        new_node->y = y;
        new_node->next = NULL;
        new_node->state = state;
    }

    if (*headref == NULL)
    {
        *headref = new_node;
        return;
    }

    Object* prev = *headref;



    while (prev->next != NULL)
    {
        prev = prev->next;
    }

    prev->next = new_node;
}

void insertAfter(Object *previousNode, int x, int y)
{
    Object *new_node = malloc(sizeof(Object));
    if (new_node)
    {
        new_node->next = previousNode->next;
    }

    previousNode->next = new_node;
}

//print linked list
void printList(Object* head)
{
    while (head != NULL)
    {
        printf("%d,%d,%d\n", head->x, head->y, head->state);
        head = head->next;
    }
}


void DrawfallingObjects(Object** headref)
{
    Object* prev = *headref;
    int count = 0;
    while (prev != NULL)
    {
        prev->state == BAD ? CP_Settings_Fill(red) : CP_Settings_Fill(green);
        CP_Graphics_DrawCircle(prev->x, prev->y, 50);
        ObjectGravity(prev);

        prev = prev->next;
        count++;
    }
}
