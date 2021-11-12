#include <stdio.h>
#include <Windows.h>

int main()
{
	int i = 0, a = 0, b = 2;
	i = a++&&++b;
	printf("%d", a);
	system("pause");
	return 0;
}