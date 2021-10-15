#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int main()
{
	int day=0;
	printf("请输入日期");
		scanf("%d", &day);
		switch (day){
		case 1:
			printf("星期1\n");
			break;
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
			break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期7\n");
			break;
		default:
			printf("error");
			break;


		}
		system("pause");
		return 0;

}