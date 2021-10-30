#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

int Count(int x)
{
	//code 3
	int count = 0;
	while (x){
		x &= (x - 1);
		count++;

	}
	return count;
	//code2
	//int count = 0;
	//while (x){
	//	if (x % 2){
	//		count++;
	//	}
	//	x /= 2;
	//}
	//return count;
	//code1
	/*int count = 0;
	int i = 0;
	while (i < sizeof(x) * 8){
		if (x&(1 << i)){
			count++;
		}
		i++;
	}
	return count;*/
}
int main(){
	int x = 10;
	int num = Count(x);
	printf("%d", num);

	system("pause");
	return 0;
}