#ifndef SEQQUEUE_H_
#define SEQQUEUE_H_

#include "Common.h"
#define MAD 8

typedef struct SeqQueueCy
{
	Datatype *base;
	size_t capacity;
	int front;
	int tall;
}SeqQueueCy;
void SeqQueueCyInit(SeqQueueCy *Q, size_t sz);
bool SeqQueueCyEmpty(SeqQueueCy *Q);
bool SeqQueueCyFull(SeqQueueCy *Q);
void SeqQueueCyEn(SeqQueueCy *Q,Datatype x);
void SeqQueueCyShow(SeqQueueCy *Q);
void SeqQueueCyInit(SeqQueueCy *Q, size_t sz)
{
	Q->capacity = sz > MAD ? sz: MAD;
	Q->base = (Datatype*)malloc(sizeof(Datatype) * Q->capacity);
	Q->front = Q->tall = 0;
}
bool SeqQueueCyFull(SeqQueueCy *Q)
{
	//if (Q->tall == Q->capacity - 1 && Q->front == 0 || Q->tall + 1 == Q->front)
		//return true;
	//return false;
	return (Q->tall + 1) % Q->capacity == Q->front;
}
bool SeqQueueCyEmpty(SeqQueueCy *Q)
{
	return (Q->front == Q->tall);
}
void SeqQueueCyEn(SeqQueueCy *Q, Datatype x)
{
	Q->base[Q->tall] = x;
	Q->tall = (Q->tall + 1) % Q->capacity;
}
void SeqQueueCyShow(SeqQueueCy *Q)
{

}


#endif