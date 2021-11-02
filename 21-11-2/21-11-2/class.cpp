#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

int main()
{
	int a = 10;
	int *p = &a;
	//int *q = a;
	printf("%d %p %d %p %p", *p, p, a,&p,&a);

	system("pause");
	return 0;
}