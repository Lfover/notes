//20-4-26
//1.C
//2.B
//3.D
//20-4-29
//1.C
//2.A
//3.C
//4.B
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	system("pause");
//	return 0;
//}




//21-5-8
//1.c
//2.c
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#pragma warning(disable:4996)
int Nixu(char a)
{
	char *p = &a;
	int count = 0;
	while (*p != '\0'){
		count++;
		p++;
	}
	for (int i = count; i > 0; i--){
		printf("%s", *(p + count));

	}
	return 0;
}

int main()
{
	char a = 0;
	printf("ÇëÊäÈë×Ö·û´®");
	scanf("%s", &a);
	Nixu(a);
	system("pause");
	return 0;
}