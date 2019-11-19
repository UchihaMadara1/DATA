#ifndef _HEAP_H_
#define _HEAP_H_



#include "Common.h"
typedef struct Heap
{
	Datatype *heap;
	size_t capacity;
	size_t size;
}Heap;



void HeapInit(Heap *php,int sz);
bool HeapEmpty(Heap *php);
bool HeapFul(Heap *php);
void HeapDestroy(Heap *php);
bool HeapInsert(Heap *php,Datatype x);

void HeapInit(Heap *php,int sz)
{
	assert(php != NULL);
	php->capacity = sz;
	php->size = 0;
	php->heap = (Datatype*)malloc(sizeof(Datatype) *sz);
}
bool HeapEmpty(Heap *php)
{
	return php->size == 0;
}
bool HeapFul(Heap *php)
{
	return (php->capacity) == (php->size);
}
void HeapDestroy(Heap *php)
{
	assert(php);
	php->capacity = php->size = 0;
	free(php->heap);
	php->heap = NULL;
}





#endif