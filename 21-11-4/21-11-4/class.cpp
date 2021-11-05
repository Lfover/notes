#include <stdio.h>
#include <Windows.h>
#pragma warning (disable:4996)

void show(int *a, int n)
{
	int i = 0;
	for (; i < n; i++){
		printf("%d", *(a + i));
	}
	printf("\n");
}
int main()
{
	int a = 0x11223344;
	
	//int a = 10;
	//int *p = &a;
	//int **pp = &p;
	//printf("before:%p %p %p %p %p %p\n", a,p,pp,&a,&p,*p);
	//*p = 20;
	////p = 20;
	//printf("after:%p %p %p %p %p\n", a, p, pp, &a, &p);

	//p = 20;  //p变量的内容变成20（&a）
	//pp = 20;//pp变量的内容变成20（&p）
	//*p = 20;//a=20
	//*pp = 20;//p=20
	//**pp = 20;//a=20
	system("pause");
	return 0;
}