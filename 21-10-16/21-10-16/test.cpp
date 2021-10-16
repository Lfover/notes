#include <stdio.h>
#include <Windows.h>
#include <string.h>
#pragma warning(disable:4996)
#define SIZE 128
#define TRY_COUNT 3

#define DEFAULT_NAME "admin"
#define DEFAULT_PSD "bitnb"

//计算n的阶乘
//int Mul(int _n)
//{
//	int result = 1;
//	for (; _n > 0; _n--)
//	{
//		if (_n == 1){
//			printf("%d", _n);
//		}
//		else{
//			printf("%d*", _n);
//		}
//		result *= _n;
//	}
//	printf("%d", result);
//	printf("\n");
//	return result;
//}
//找到了返回数组下标，没找到返回-1
//int BinSearch(int a[], int num, int x)//传参的时候，数组下标是被忽略 的
//{
//	int start = 0;
//	int end = num - 1;
//	while (start < end){
//		int mid = (start + end) / 2;
//		if (x > a[mid]){
//			start = mid + 1;
//		}
//		else if (x < a[mid]){
//			end = mid - 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}

//void Show()
//{

	/*char str1[]="hello world...";
	char str2[] = "##############";
	int start = 0;
	int end = strlen(str1) - 1;
	for (; start <= end; start++, end--){
		str2[start] = str1[start];
		str2[end] = str1[end];
		Sleep(1000);
		printf("%s\n", str2);
	}*/

	/*while (start <= end){
		str2[start] = str1[start];
		str2[end] = str1[end];
		start++;
		end--;
		Sleep(1000);
		printf("%s\n", str2);
	}*/
//}

int main()
{
	char name[SIZE];
	char passwd[SIZE];
	int count = TRY_COUNT;
	while (count > 0){
		printf("请输入你的账号");
		scanf("%s", name);
		printf("请输入你的密码");
		scanf("%s", passwd);


		if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
			printf("欢迎%s进入\n", name);
			break;
		}
		else{
			count--;
			printf("登录失败，请检查用户名和密码,你还剩%d次机会\n",count);
			
		}
	}
	if (count == 0){
		printf("登录失败，请60秒后重试");
		
			int time = 1;
			while (time <= 60)
				{
					printf("离上次登录已经过了。。。%ds\r", time);
					Sleep(10);
					time++;
				}
			
	}

	//Show();

	//有序数组的查找，是排除的过程
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int num = sizeof(a) / sizeof(a[0]);
	//int n = 0;
	//printf("请输入你要找的数据");
	//scanf("%d", &n);
	//int index = BinSearch(a, num, n);
	//printf("result:%d\n", index);



	//5!=5*4*3*2*1
	//printf("请输入你要求的阶乘");
	//	int i = 1;
	//scanf("%d", &n);//格式化输入，将键盘上输入的字符转换成整数输入
	
	//int i = 1;
	//int result = 0;
	//for (int i = 1; i <= 10; i++){
	//	result += Mul(i);
	//}
	//printf("result:%d", result);
	
	

	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", i);
	//	i++;
	//}
	system("pause");
	return 0;

}