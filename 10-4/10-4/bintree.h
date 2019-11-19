#ifndef _BINTREE_H_
#define _BINTREE_H_

//ABC##DE##F##G#H##
#include "Common.h"

typedef struct BinTreeNode
{
	Datatype data;
	struct BinTreeNode *leftChild;
	struct BinTreeNode *rightChild;
}BinTreeNode;
typedef struct BinTree
{
	BinTreeNode *root;
}BinTree;

//typedef BinTreeNode* BinTree;
void BinTreeInit(BinTree *t);
void BinTreeCreate_1(BinTreeNode **t);
BinTreeNode* BinTreeCreate_2();
void BinTreeCreate(BinTree *t);
void BinTreeCreateBystr(BinTree *t, char *str, int *i);
BinTreeNode *_BinTreeCreateBystr(char *str, int *i);
//创建

void BinTreeInit(BinTree *t)
{
	t->root = NULL;
	//t = NULL;
	/*assert(t);
	(*t)->data = 0;
	(*t)->leftChild = (*t)->rightChild = NULL;*/
}
void BinTreeCreate(BinTree *t)
{
	BinTreeCreate_1(&t->root);
	//t->root = BinTreeCreate_2();
}
void BinTreeCreate_1(BinTreeNode **t)
{
	Datatype item;
	scanf("%c",&item);
	if (item == '#')
	{
		*t = NULL;
	}
	else
	{
		*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		//*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		//(*t)->data = item;
		(*t)->data = item;
		BinTreeCreate_1(&((*t)->leftChild));
		//BinTreeCreate_1(&((*t)->leftChild));
		//BinTreeCreate_1(&((*t)->rightChild));
		BinTreeCreate_1(&((*t)->rightChild));
	}
} 
BinTreeNode* BinTreeCreate_2()
{
	Datatype item;
	scanf("%c",&item);
	if (item == '#')
		return NULL;
	else
	{
		BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		assert(t != NULL);
		t->data = item;
		t->leftChild = BinTreeCreate_2();
		t->rightChild = BinTreeCreate_2();
		return t;
	}
}
void BinTreeCreateBystr(BinTree *t, char *str, int *i)
{
	t->root = _BinTreeCreateBystr(str,i);
}
BinTreeNode *_BinTreeCreateBystr(char *str, int *i)
{
	if (str[*i] == '#'||str[*i] == '\0')
		return NULL;
	else
	{
		BinTreeNode *p = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		p->data = str[*i];
		(*i)++;
		p->leftChild = _BinTreeCreateBystr(str,i);
		(*i)++;
		p->rightChild = _BinTreeCreateBystr(str,i);
		return p;
	}
}

//遍历
void PreOrder(BinTree *t);
void _PreOrder(BinTreeNode *t);
void InOrder(BinTree *t);
void _InOrder(BinTreeNode *t);
void PostOrder(BinTree *t);
void _PostOrder(BinTreeNode *t);
void PreOrder(BinTree *t)
{
	 _PreOrder(t->root);
}
void _PreOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		printf("%c ", t->data);
		_PreOrder(t->leftChild);
		_PreOrder(t->rightChild);
	}
}
void InOrder(BinTree *t)
{
	 _InOrder(t->root);
}
void _InOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		_InOrder(t->leftChild);
		printf("%c ", t->data);
		_InOrder(t->rightChild);
	}
}
void PostOrder(BinTree *t)
{
	 _PostOrder(t->root);
}
void _PostOrder(BinTreeNode *t)
{
	if (t != NULL)
	{
		_PostOrder(t->leftChild);
		_PostOrder(t->rightChild);
		printf("%c ", t->data);
	}
}
//二叉树实现
size_t _Size(BinTreeNode *t);
size_t Size(BinTree *t);
size_t _Height(BinTreeNode *t);
size_t Height(BinTree *t);
BinTreeNode * _Find(BinTreeNode *t,Datatype key);
BinTreeNode * Find(BinTree *t,Datatype key);
BinTreeNode * _Parent(BinTreeNode *t,Datatype key);
BinTreeNode * Parent(BinTree *t,Datatype key);
//还原二叉树
BinTreeNode* _BinTreeCreateBy_LVR_LRV(char *lvr, char *lrv, int n);
void BinTreeCreateBy_LVR_LRV(BinTree*t, char *lvr, char *lrv, int n);

size_t Size(BinTree *t)
{
	return _Size(t->root);
}
size_t _Size(BinTreeNode *t)
{
	if (t == NULL)
		return 0;
	return _Size(t->leftChild) + _Size(t->rightChild) + 1;
}
BinTreeNode * Find(BinTree *t, Datatype key)
{
	return _Find(t->root,key);
}
BinTreeNode * _Find(BinTreeNode *t, Datatype key)
{
	BinTreeNode *p;
	if (t == NULL)
		return NULL;
	if (t->data == key)
		return t;
	p = _Find(t->leftChild,key);
	if (p != NULL)
		return p;
	return _Find(t->rightChild,key);
}
BinTreeNode * Parent(BinTree *t, Datatype key)
{
	return _Parent(t->root, key);
}
BinTreeNode * _Parent(BinTreeNode *t, Datatype key)
{
	BinTreeNode *pr;
	BinTreeNode *p = _Find(t,key);

	if (t == NULL||p == NULL||p == t);
	    return NULL;
	if (t->leftChild == p || t->rightChild == p)
		return t;
	pr = _Parent(t->leftChild,key);
	if (pr != NULL)
		return pr;
	return _Parent(t->rightChild,key);
}


void BinTreeCreateBy_LVR_LRV(BinTree*t,char *lvr,char *lrv,int n)
{
	t->root = _BinTreeCreateBy_LVR_LRV(lvr,lrv,n);
}
BinTreeNode* _BinTreeCreateBy_LVR_LRV(char *lvr, char *lrv, int n)
{
	//ABCDEFGH
	//CBEDFAGH;
	//CEFDBHGA;
	int k = 0;
	if (n == 0)
		return NULL;
	while (lvr[k] != lrv[n - 1])
		k++;
	BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
	t->data = lvr[k];
	t->rightChild = _BinTreeCreateBy_LVR_LRV(lvr + k + 1, lrv+k,n-k-1);
	t->leftChild = _BinTreeCreateBy_LVR_LRV(lvr,lrv,k);
	return t;
}

#endif