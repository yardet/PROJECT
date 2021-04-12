#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define A 1
#define B 2
#define C 3
#define D 4
#define E 5
#define F 6
#define G 7
#define H 8
#define ALLOCATION_FAILURE -1
typedef char chessPos[2];
typedef struct _chessPosCell
{
    chessPos position;
    struct _chessPosCell* next;
} chessPosCell;
typedef struct _chessPosArray
{
    unsigned int size;
    chessPos* positions;
}chessPosArray;
typedef struct __chessPosList
{
    chessPosCell* head;
    chessPosCell* tail;
}chessPosList;
chessPosArray*** validKnightMoves();
void display(chessPosList* lst);
void check_allocation(void* res);
int isPosAppear(chessPosList* lst, chessPos position);
chessPosCell* AllocateDListNode(int num, chessPosCell* next);
void insertDataToEndList(chessPosList* res, int num);
void insertNodeToEndOfList(chessPosList* lst, chessPosCell* Tail);
void makeEmptyList(chessPosList* res);
bool isEmptyList(chessPosList* lst);
void freeList(chessPosList* lst);
void printList(chessPosList* res);
void main()
{
    //chessPosArray*** valid_moves = validKnightMoves();
    chessPosList* lst;
   // makeEmptyList(lst);
   // display(lst);
  //  printList(lst);
}
//chessPosArray*** validKnightMoves()
//{
 //   
//}
void check_allocation(void* res)
{
    if (!res)
    {
        fprintf(stderr, "Allocation failure in \nExiting...\n");
        exit(ALLOCATION_FAILURE);
    }
}

/*void display(chessPosList* lst)
{

}
bool isEmptyList(chessPosList* lst)
{
    if (lst->head == NULL)
        return true;
    else
        return false;
}
void printList(chessPosList* res)
{
    chessPosCell* current = res->head;
    int j;
    char i;
    int count = 0;
    while (current)
    {
        for (i = 'A'; i <= 'H'; i++)
        {
            for (j = 1; j <= 8; j++)
            {
                while (current)
                {
                    if (current->position == strn(i, j))
                        printf("|%d|", count);
                    else
                        printf("|  |");
                    count++;
                    current = current->next;
                }
            }
            puts("\n");
        }
        current = current->next;
    }  
}
char* strn(char c,int n)
{
    return  
}
void makeEmptyList(chessPosList* res)
{
    res->head = res->tail = NULL;
}
int isPosAppear(chessPosList* lst, chessPos position)
{
	chessPosCell* node = lst->head;
	while (node != NULL)
	{
		if (node->position == position)
		{
			return 1;
		}
		node = node->next;
	}
	return 0;
}

void freeList(chessPosList* lst)
{
     chessPosCell* curr;
     chessPosCell* next;
    curr = lst->head;
    while (curr)
    {
        next = curr->next;
        free(curr->position);
        free(curr);
        curr = next;
    }
    lst->head = NULL;
    lst->tail = NULL;
}

void insertDataToEndList(chessPosList* res, int num)
{
    chessPosCell* node = AllocateDListNode(num, NULL);
    check_allocation(node);
    insertNodeToEndOfList(res, node);
}
chessPosCell* AllocateDListNode(int num, chessPosCell* next)/*allocation of new node*/
/*{
    chessPosCell* res;
    res = (chessPosCell*)malloc(sizeof(chessPosCell));
    check_allocation(res);
    *(res->position)= (int*)malloc(sizeof(int));/*allocation of data*/
  /*  check_allocation(res);
    *(res->position)= num;
    res->next = next;
    return res;
}
void insertNodeToEndOfList(chessPosList* lst, chessPosCell* Tail)
{
    if (isEmptyList(lst))
    {
        lst->head = Tail;
        lst->tail = Tail;
    }
    else
    {
        lst->tail->next = Tail;
        lst->tail = Tail;
    }
}*/
