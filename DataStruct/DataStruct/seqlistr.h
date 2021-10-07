#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include "common.h"

#define ElemType int

#define SEQLIST_DEFAULT_SIZE 8
//定义顺序表的结构
typedef struct SeqList
{
	ElemType *base;
	size_t capacity;
	size_t size;

}SeqList;





void SeqListInit(SeqList *plist);
void SeqListPushBack(SeqList *plist, ElemType x);
void SeqListShow(SeqList *plist);
/////////////////////////////////////////////////////
bool IsFull(SeqList *plist)
{
	assert(plist != NULL);
	return plist->size >= plist->capacity;
}
bool IsEmpty(SeqList *plist)
{
	return plist->size == 0;
}

void SeqListInit(SeqList *plist)
{
	assert(plist != NULL);
	plist->capacity = SEQLIST_DEFAULT_SIZE;
	plist->base = (ElemType*)malloc(sizeof(ElemType)*plist->capacity);
	plist->size = 0;
}

void SeqListPushBack(SeqList *plist, ElemType x)
{
	assert(plist != NULL);
	if (IsFull(plist))
	{
		printf("顺序表已满，%d不能插入\n", x);
		return;
	}
	plist->base[plist->size++] = x;
}
void SeqListShow(SeqList *plist)
{
	assert(plist != NULL);
	for (size_t i = 0; i < plist->size; i++)
		printf("%d ", plist->base[i]);
	printf("\n");
}



#endif