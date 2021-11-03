//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int MyStrlen(char *str)
//{
//	if (NULL == str){
//		return 0;
//	}
//	char *start = str;
//	char *end = str;
//	while (*end != '\0'){
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int num = sizeof(a) / sizeof(a[0]);
//	int *p = a;
//	int i = 0;
//	for (; i < num; i++){
//		printf("%d",a[i]);
//	}
//	printf("\n");
//
//
//	/*int a[10];
//	int *p = a;
//	int *q = &a[9];
//	printf("%d", q - p);*/
//
//	/*char *str = "helloworld";
//	int len = MyStrlen(str);
//	printf("%d\n", len);*/
//	system("pause");
//	return 0;
//}