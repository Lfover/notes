#include <stdio.h>
#include <Windows.h>

struct Test
	{
		int num;
		char *pcName;
		short SDate;
		char cha[2];
		short sBa[4];
	}*p;

int main()
{
	//假设p的值为0x100000
	printf("%p\n", p + 0x1);//0x100014   0x1就是1，给指针加1实际上是加上该指针指向的类型的大小
	printf("%p\n", (unsigned long)p + 0x1);//0x100001   指针p被强转成整形，不在是指针了，加上1就是1
	printf("%p\n", (unsigned int *)p + 0x1);//0x100004   被强转成整形指针，加上1就是加上指向类型的大小，即4

	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));

	int a[4]{1, 2, 3, 4};
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr[-1], *ptr);
	system("pause");
	return 0;
}