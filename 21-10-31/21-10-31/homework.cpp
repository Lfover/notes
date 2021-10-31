//第四题
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	x = x^y;
//	y = x^y;
//	x = x^y;
//	printf("%d %d", x, y);
//	system("pause");
//	return 0;
//}






//第三题
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//
//int Count(int x){
//	int num = 0;
//	int i = 0;
//	while (i<sizeof(x)*8){
//		if (x&(1 << i)){
//			num++;
//		}
//		i++;
//	}
//	return num;
//}
//int main()
//{
//	int num = 0;
//	int x = 0;
//	printf("请输入整数\n");
//	scanf("%d", &x);
//
//	num = Count(x);
//	printf("%d个1\n", num);
//
//	system("pause");
//	return 0;
//}






//第二题
//#include <stdio.h>
//#include <windows.h>
//#pragma warning(disable:4996)
//
//int OU(int x)
//{
//	int i = 1;
//	int n = 0;
//	while (i <sizeof(x)*8){
//		
//		if (x & (1<<i)){
//			printf("1 ");
//		}
//		else{
//			printf("0 ");
//		}
//		i += 2;
//	}
//	printf("\n");
//	return 0;
//}
//
//int JI(int x){
//	int i = 0;
//	int n = 0;
//	while (i <sizeof(x) * 8){
//		
//		if (x & (1<<i)){
//			printf("1 ");
//		}
//		else{
//			printf("0 ");
//		}
//		i += 2;
//	}
//	printf("\n");
//	return 0;
//}
//
//
//
//int main()
//{
//	int x = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &x);
//	OU(x);
//	JI(x);
//
//	system("pause");
//	return 0;
//}




















//第一题
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning (disable:4996)
//
//int Differ(int m, int n)
//{
//	int num = 0;
//	int x = m^n;
//	int i = 0;
//	while (i < sizeof(x) * 8){
//		if (x&(1 << i)){
//			num++;
//		}
//		i++;
//    }
//	return num;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个整数\n");
//	scanf("%d %d", &m, &n);
//	int num = Differ(m, n);
//	printf("%d", num);
//
//	system("pause");
//	return 0;
//
//}