#include <stdio.h>
#include <stdlib.h>
#include <vld.h>

//1->2->3->...->10
//单链表
typedef struct ListNode
{
	int data;//数据域
	ListNode *next;//指针域

}ListNode;

typedef ListNode* List;



//头插法
//void headcha(List *phead)
//{
//	assert(phead != NULL);
//	*phead = (ListNode*)malloc(sizeof(ListNode));
//	assert(phead != NULL);
//	(*phead)->data = 1;
//	(*phead)->next = NULL;
//
//	ListNode *p = *phead;
//	for (int i = 0; i <= 10; i++)
//	{
//		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
//		assert(s != NULL);
//		s->next = *phead;
//		p->next = s;
//		*phead = s;
//
//	}
//}


void SeqListEraseAll(int *ar int *n, int key)
{

}

void main()
{
	int ar[] = { 1, 3, 5, 5, 5, 5, 5, 7, 9, 5, 5, 8, 0, 2 };
	int n = sizeof(ar) / sizeof(ar[0]);
	SeqListEraseAll(ar, &size; 5);
	for (int i = 0; i < size;i++)
		printf("%d", ar[i]);
	printf("\n");
}


void ListInit(List *phead){
	assert(phead != NULL);
	*phead = NULL;
}
void ListCreate(List *phead){
	assert(phead != NULL);
	*phead = (ListNode*)malloc(sizeof(ListNode));
	assert(*phead != NULL);

	(*phead)->data = 1;
	(*phead)->next = NULL;

	ListNode *p = *phead;
	for (int i = 2; i <= 10;i++)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		assert(s != NULL);
		s->data = i;
		s->next = NULL;

		p->next = s;
		p = s;
	}

}
void main()
{
	List mylist;//ListNode *mylist
	ListInit(&mylist);
	ListCreate(&mylist);
}