////B
////C
//#include <stdio.h>
//#include <Windows.h>
//#pragma warning(disable:4996)
//
//int Two(int *a, int n)
//{
//	int start = 0;
//	int end = sizeof(a);
//	while (start <end){
//		int mid = (start + end) / 2;
//		if (a[mid] > n){
//			end = mid - 1;
//		}
//		else if (a[mid] < n){
//			start = mid + 1;
//		}
//		else{
//			return mid;
//			break;
//		}
//	}
//	if (start >= end)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int a[10];
//	int n = 0;
//	printf("输入10个有序数字");
//	for (int i = 0; i < 10; i++){
//		scanf("%d", &a[i]);
//	}
//	printf("请输入你要查找的数字");
//	scanf("%d", &n);
//	int b = Two(a, n);
//	if (b== 0){
//		printf("没找到");
//	}
//	else{
//		printf("%d", b);
//	}
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <Windows.h>
//
//#pragma warning(disable:4996)
//
//int Bs(int a[], int num, int x)
//{
//	int start = 0;
//		int end = num-1;
//		while (start <end){
//			int mid = (start + end) / 2;
//			if (a[mid] > x){
//				end = mid - 1;
//			}
//			else if (a[mid] < x){
//				start = mid + 1;
//			}
//			else{
//				return mid;
//				break;
//			}
//		}
//		if (start >= end)
//		{
//			return -1;
//		}
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = sizeof(a) / sizeof(a[0]);
//	int x = 0;
//	printf("输入想要查找的数据");
//	scanf("%d", &x);
//	int result=Bs(a, num, x);
//	printf("%d", result);
//	system("pause");
//	return 0;
//}