#include <stdio.h>
#include <Windows.h>

int main(){
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));




	//int i = -20;
	//unsigned int j = 10;
	//printf("%d\n", i + j);
	//Êä³ö-10
	system("pause");
	return 0;
}