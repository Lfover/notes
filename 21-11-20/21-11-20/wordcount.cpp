#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
const int N = 100;
char a[N];
int main()
{
	int count = 0;
	//char a[100] = { 0 };
	for (int i = 0; i < 100; i++){
		scanf("%s", &a[i]);
	}
	for (int i = 0; i < 100; i++){
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')){
			continue;
		}
		else{
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	return 0;

}