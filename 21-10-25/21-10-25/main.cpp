#include "class.h"

void BubbleSort(int arr[], int num)
{
	printf("%d\n", sizeof(arr));
}
int main()
{
	int arr[] = { 2, 1, 3, 2, 5, 6, 7, 8, 9, 0, 1, 2, 4, 3, 2 };
	int num = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, num);
	//int arr[3][4] = {1, 2, 3, 4};
	system("pause");
	return 0;
}