#include "class.h"

int fib(int n)
{
	if (n == 1 || n == 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
//int Face(int n)
//{
//	if (n == 1){
//		return 1;
//	}
//	else{
//		return n*Face(n - 1);
//	}


	/*int i = 1;
	int total = 1;
	for (; i <= n; i++){
		total *= i;
	}
	return total;*/
//}

//void ShowInt(int x)
//{
//	if (x > 9){
//		ShowInt(x / 10);
//	}
//	printf("%d ", x%10);
//
//
	/*if (x / 10 == 0){
		printf("%d ", x);
		return;
	}
	ShowInt(x / 10);
	printf("%d ", x % 10);*/

	
	/*int arr[64] = { 0 };
	int i = 0;
	while (x > 0){
		arr[i] = x % 10;
		x /= 10;
		i++;
	}
	while (i >= 0){
		i--;
		printf("%d ", arr[i]);
	}
	printf("\n");
*/


//#include "class.h"
//
//int MyStrlen(const  char *str)
//{
//	if (*str == '\0'){
//		return 0;
//	}
//	return 1 + MyStrlen(str + 1);


	/*int i=0;
	while (str[i] != '\0'){
		i++;
	}
	return i;*/

//int MyAdd(int x, int y)
//{
//	return x + y;
//}
//int MyDiv(int x, int y)
//{
//	if (0 == y){
//		printf("div zero error");
//		return - 1;
//	}
//	return x / y;
//}