#ifndef _COMMON_H_
#define _COMMON_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#define Datatype int 
void Swap(Datatype *a, Datatype *b)
{
	Datatype temp;
		temp = *a;
		*a = *b;
		*b = temp;
}
#endif