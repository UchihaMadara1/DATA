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
#define Q obj
#define tall rear
typedef struct
{
	int *base;
	size_t capacity;
	int front;
	int rear;
} MyCircularQueue;

/** Initialize your data structure here. Set the size of the queue to be k. */

MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* str = malloc(sizeof(MyCircularQueue));
	str->capacity = k + 1;
	str->base = (int *)malloc(sizeof(int)*(str->capacity + 1));
	str->front = str->rear = 0;
	return str;
}
/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	return obj->front == obj->tall;
}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	return (obj->rear + 1) % obj->capacity == obj->front;
}
/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
	if (myCircularQueueIsFull(obj))
		return false;
	obj->base[obj->tall] = value;
	obj->tall = (obj->tall + 1) % (obj->capacity);
	return true;
}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return false;
	obj->front = (obj->front + 1) % obj->capacity;
	return true;
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->base[obj->front];
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->base[((obj->rear - 1) + obj->capacity) % obj->capacity];
}



void myCircularQueueFree(MyCircularQueue* obj) {
	free(obj->base);
	obj->base = NULL;
	free(obj);
	obj = NULL;
}

/**
* Your MyCircularQueue struct will be instantiated and called as such:
* MyCircularQueue* obj = myCircularQueueCreate(k);
* bool param_1 = myCircularQueueEnQueue(obj, value);

* bool param_2 = myCircularQueueDeQueue(obj);

* int param_3 = myCircularQueueFront(obj);

* int param_4 = myCircularQueueRear(obj);

* bool param_5 = myCircularQueueIsEmpty(obj);

* bool param_6 = myCircularQueueIsFull(obj);

* myCircularQueueFree(obj);
*/