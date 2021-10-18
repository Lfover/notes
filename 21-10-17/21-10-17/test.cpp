//B
//C
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