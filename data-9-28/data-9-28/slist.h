#ifndef _SLIST_H_
#define _SLIST_H_
#include "common.h"

#define SEQLIST_DEFAULT_SIZE 8
#define SEQLIST_INC_SIZE 5

//typedef struct Node
//{
//	int data;
//	struct Node *next;
//}Node;
//typedef Node* List;
//
//void CreateList_Tail(List *head)
//{
//	*head = (Node*)malloc(sizeof(Node));
//	(*head)->data = 1;
//	(*head)->next = NULL;
//	Node *p = *head;
//	for (int i = 2; i <= 10; ++i)
//	{
//		Node *s = (Node*)malloc(sizeof(Node));
//		assert(s != NULL);
//		(*s)->data = i;
//		(*s)->next = NULL;
//
//		s->next = p;
//		s = p;
//	}
//}
typedef struct SlistNode
{
	Datatype data;
    struct SlistNode *next;
}SlistNode;
typedef struct Slist
{
	SlistNode *first;
	SlistNode *last;
	int sz;
}Slist;
void SlistInit(Slist *plist);
#endif