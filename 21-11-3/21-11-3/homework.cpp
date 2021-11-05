//20-4-26
//1.C
//2.B
//3.D
//20-4-29
//1.C
//2.A----C
//3.C-----B
//4.B---C
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
//#include <stdio.h>
//#include <Windows.h>
//#include <string.h>
//#pragma warning(disable:4996)
//int Nixu(char a)
//{
//	char *p = &a;
//	int count = 0;
//	while (*p != '\0'){
//		count++;
//		p++;
//	}
//	for (int i = count; i > 0; i--){
//		printf("%s", *(p + count));
//
//	}
//	return 0;
//}
//ÄæÐò×Ö·û´®
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//void reverse(char *str)
//{
//	if (NULL == str){
//		return;
//	}
//	char *head = str;
//	char *end = str + strlen(str) - 1;
//	while (head<end)
//	{
//		char temp = *head;
//		*head = *end;
//		*end = temp;
//		head++;
//		end--;
//	}
//}
//int main()
//{
//	char str[] = "abl=cd1234";
//	printf("before:%s\n", str);
//	reverse(str);
//	printf("after:%s\n", str);
//	system("pause");
//	return 0;
//}




//
//int main()
//{
//	char a = 0;
//	printf("ÇëÊäÈë×Ö·û´®");
//	scanf("%s", &a);
//	Nixu(a);
//	system("pause");
//	return 0;
//}

//2+22+222+2222+22222
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int Sn(int a, int n)
//{
//	int sum = 0;
//	int sn = a;
//	for (int i = 0; i < n; i++){
//		
//		sum += sn;
//		sn = sn * 10 + a;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("enter your a&&n");
//	scanf("%d %d", &a, &n);
//	int result = Sn(a, n);
//	printf("result:%d\n", result);
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

int main()
{
	int n = 100000;
	for (int i = 1; i < n; i++){
		if ((i % 10000)*(i % 10000)*(i % 10000) + (i / 10 % 1000)*(i / 10 % 1000)*(i / 10 % 1000) + (i / 100 % 100)*(i / 100 % 100)*(i / 100 % 100) + (i / 1000 % 10)*(i / 1000 % 10)*(i / 1000 % 10) + (i / 10000)*(i / 10000)*(i / 10000)==i)
		{
			printf("%d\n", i);
		}
		continue;
	}
	system("pause");
	return 0;
}