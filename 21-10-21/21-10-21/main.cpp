#include  "class.h"
int main()
{
	char str[] = "abcd1234";
	//char *str = "abcd1234";

	printf("%s\n", str);
	ReverseString(str);
	printf("after:%s\n", str);
	system("pause");
	return 0;
}