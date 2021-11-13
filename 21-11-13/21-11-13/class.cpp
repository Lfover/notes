/////////////////////////////////////////
//函数指针数组的用途
#include "class.h"

int MyAdd(int x, int y)
{
	return x + y;
}
int MySub(int x, int y)
{
	return x - y;
}
int MyMul(int x, int y)
{
	return x*y;
}
int MyDiv(int x, int y)
{
	if (y != 0){
		return x / y;
	}
	else{
		printf("除数不能为0");
		return -1;
	}
}



//#include <stdio.h>
//#include <Windows.h>
//void show(int(*a)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++){
//		for (int j = 0; j < col; j++){
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//
//	int a[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	show(a, 3, 5);
//	system("pause");
//	return 0;
//}