
//结构体的题目
//D
//A
//D
//B
/////////////////////////////////////////////////////////////////////
//20个瓶子能喝多少瓶
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//int Num(int x)
//{   
//	int sum = x;
//	int n1 = x;
//	int n2 = x;
//    if (x < 2){
//		return 1;
//	}
//	else{
//		while (x >= 2){
//			sum+= x / 2;
//			x = x / 2+x%2;
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int n = Num(x);
//	printf("%d",n);
//	system("pause");
//	return 0;
//}
//调试的题目
//c
//A
//C
//A
//B
////////////////////////////////////////////////////////////////////
//自己实现strcopy()
//#include <stdio.h>
//#include <Windows.h>
//#include <assert.h>
//int Mystrcopy(char *dst, const char *str)
//{
//	assert(dst);
//	assert(str);
//	char *ret = dst;
//	while (*str != '\0'){
//		*dst = *str;
//		dst++;
//		str++;
//	}
//	*dst = *str;
//	return *ret;
//}
//int main()
//{
//	const char*str = "hello world";
//	char dst[64];
//	Mystrcopy(dst, str);
//	printf("%s\n", dst);
//
//	system("pause");
//	return 0;
//}
//实现数组把奇数放在前面，偶数放后面

#include <stdio.h>
#include <Windows.h>

void Switch(int arr[],int num)
{
	int *start = arr;
	int *end = arr + num-1;
	while (start < end){
		while (start < end && (*start) & 1){
			start++;
		}
		while (start < end && !(*end & 1)){
			end--;
		}
		if (start < end){
			*start ^= *end;
			*end ^= *start;
			*start ^= *end;
			start++; end++;
		}
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Switch(arr, num);
	
	system("pause");
	return 0;
}

