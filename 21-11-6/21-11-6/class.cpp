#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
void show()
{
	printf("haha\n");
}
int main(){

	int sum = 0;
	int i = 1;
	for (; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	printf("11\n");
	printf("22\n");
	show();
	system("pause");
	return 0;
}
