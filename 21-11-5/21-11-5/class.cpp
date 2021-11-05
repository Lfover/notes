//#include <stdio.h>
//#include <Windows.h>
//
//typedef struct pos{
//	int x;
//	int y;
//
//}pos_t;
//
//int main()
//{
//	pos_t sust_pos = { 23, 45 };//不论是数组还是结构体，都是在定义的时候初始化
//	system("pause");
//	return 0;
//}

//水仙花数
//1、先写一个函数，判定一个数字是否时“水仙花数”
//2、判定数字多少位
//3.for(100000)
#include <stdio.h>
#include <Windows.h>
#include <math.h>
#pragma warning(disable:4996)

int Count(int x)
{
	int count = 0;
	while (x){
		x /= 10;
		count++;
	}
	return count;
}
int IsNarcissus(int x){
	int old = x;
	int count = Count(x);
	int sum = 0;
	while (x){
		double temp = x % 10;
		sum+=(int)pow(temp, 3);
		x /= 10;
	}
	return sum == old;
	//return sum = old ? 1 : 0;
	/*if (sum == old){
		return 1;
	}
	else{
		return 0;
	}*/
}
int main()
{
	for (int i = 0; i < 100000; i++){
		if (IsNarcissus(i)){
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}