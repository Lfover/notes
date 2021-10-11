#include <stdio.h>
#include <Windows.h>

//
//void Show()
//{
//	static int i = 0;//输出的是12345，因为类似于全局变量
//	//int i = 0;//输出每个i的值都是1，因为局部变量，函数结束就被释放
//	i++;
//	printf("current i is:%d\n", i);
//}
int main()
{



	printf("%d\n", sizeof(int *));
	/*int i = 0;
	for (; i < 10; i++){
		Show();
		Sleep(500);
	}*/
	system("pause");
	return 0;
}