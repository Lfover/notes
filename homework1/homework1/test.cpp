//乘法口诀表
#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

int main()
{
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 9; j++){
			printf("%d*%d=%d", i, j, i*j);

		}
		printf("\n");
	}
	system("pause");
	return 0;
}






//分数求和
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int flag = 1;
//	double sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += ((double)1 / i)*flag;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
//}






//数9的个数
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//int Nine(){
//	int count = 0;
//	for (int i = 9; i <=99; i++){
//		if ((i % 10 == 9) || ((i / 10) % 10) == 9){
//			count++;
//		}
//	}
//	return count+1;
//}
//int main()
//{
//	int result = Nine();
//	printf("%d", result);
//	system("pause");
//	return 0;
//}






//最大公约数
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//int f(int n, int m){
//	if (n = m){
//		return n;
//	}
//	if (n >m){
//		for (int i = m; i > 0; i--){
//			if ((n%i == 0 )&& (m%i == 0)){
//				return i;
//				break;
//			}
//		}
//	}
//	else{
//		for (int i = n; i > 0; i--){
//			if (n%i == 0 && m%i == 0){
//				return i;
//				break;
//			}
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int n, m;
//	printf("请输入两个数");
//	scanf("%d %d", &n, &m);
//	int result= f(n,m);
//	printf("%d", result);
//	system("pause");
//	return 0;
//}