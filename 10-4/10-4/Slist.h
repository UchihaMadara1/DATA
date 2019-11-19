#ifndef _SLIST_H_
#define _SLIST_H_
#include "common.h"

#define SEQLIST_DEFAULT_SIZE 8
#define SEQLIST_INC_SIZE 5
//SClist
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
}SlistNode;//*PSlistNode
typedef struct Slist
{
	SlistNode *first;
	SlistNode *last;
	size_t sz;
}Slist;
bool SlistInit(Slist *plist);
SlistNode * BuyNode(Datatype x);
void SlistReverse(Slist *plist);
bool SlistPush_back(Slist *plist);
bool SlistPush_front(Slist *plist);
void ShowList(Slist *plist);
bool Slistpop_back(Slist *plist);
bool Slistpop_front(Slist *plist);
bool Slistpop_front(Slist *plist)
{
	SlistNode *p = plist->first->next;
	if (plist->sz == 0)
		return false;
	plist->first->next = p->next;
	free(p);
	p = NULL;
	plist->sz--;
	return true;
}
bool Slistpop_back(Slist *plist)
{
	SlistNode *p = plist->first;
	if (plist->sz == 0)
		return false;
	while(p->next != plist->last)
	{
		p = p->next;
	}
	free(plist->last);
	plist->last = p;
	plist->last->next = NULL;
	plist->sz--;
	return true;
}
bool SlistPush_front(Slist *plist,Datatype x)
{
	SlistNode *s = BuyNode(x);
	if (s == NULL)
		return false;
	s->next = plist->first->next;
	plist->first->next = s;
	if (plist->sz == 0)
		plist->last = s;
	plist->sz++;
	return true;
}
void ShowList(Slist *plist)
{
	SlistNode *p = plist->first->next;
	while (p != NULL)
	{
		printf("->%d",p->data);
		p = p->next;
	}
	printf("\n");
}
bool SlistPush_back(Slist *plist,Datatype x)
{
		SlistNode *s = BuyNode(x);
		if (s == NULL)
			return false;
		plist->last->next = s;
		plist->last = s;
		plist->sz++;
	    return true;
}
SlistNode * BuyNode(Datatype x)
{
	SlistNode *s = (SlistNode *)malloc(sizeof(SlistNode));
	if (s == NULL)
		return NULL;
	s->data = x;
	s->next = NULL;
	return s;
}
bool SlistInit(Slist *plist)
{
	SlistNode *s = BuyNode(0);
	if (s == NULL)
		return false;
	plist->first = plist->last = s;
	plist->sz = 0;
	return true;
}
void SlistReverse(Slist *plist)
{
	SlistNode *p = plist->first->next;
	SlistNode *q = p->next;
	plist->last = p;
	plist->last->next = NULL;
	p = q;
	while (p != NULL)
	{
		q = q->next;
		p->next = plist->first->next;
		plist->first->next = p;
		p = q;
	}
}
#endif