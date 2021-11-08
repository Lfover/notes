#include <stdio.h>
//#include <Windows.h>

struct _byte{
	int   a : 25;
	char  c : 7;
	int   aa : 30;
	int cc : 22;
};
//struct S1{
//	unsigned int i : 8;
//	char j : 4;
//	int a : 4;
//	double b;
//};
//struct S2{
//	int i : 8;
//	char j : 4;
//	double b;
//	int a : 4;
//};
//struct S3
//{
//	int i;
//	char j;
//	double b;
//	int a;
//};
int main()
{
	printf("%d\n", sizeof(_byte));
	/*printf("%d\n", sizeof(S2));
	printf("%d\n", sizeof(S3));*/
	//system("pause");
	return 0;
}