//闰年判定
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int Run(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int ret = Run(2000);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//素数判定
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int Is(int x)
//{
//	int i = 2;
//	for (; i < x; i++){
//		if (x%i == 0){
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int ret = Is(x);
//	if (1 == ret){
//		printf("prime number\n");
//
//	}
//	else{
//		printf("not\n");
//	}
//	system("pause");
//	return 0;
//}