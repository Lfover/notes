#include "class.h"

void Menu()
{
	printf("##############################\n");
	printf("##1.Add                2.Sub##\n");
	printf("##3.Mul                4.Div##\n");
	printf("##                     0.Exit##\n");
	printf("##############################\n");
	printf("please select");

}
int main()
{
	int(*fun[5])(int, int) = { NULL,MyAdd,MySub,MyMul,MyDiv };
	int select = 0;
	do{
		Menu();
		scanf("%d", &select);
		if (select < 0 || select>4){
			printf("error,try again\n");
			continue;
		}
		else if (select == 0){
			printf("bye\n");
			break;
		}
		int x = 0;
		int y = 0;
		printf("«Î ‰»Îx");
		scanf("%d", &x);
		printf("«Î ‰»Îy");
		scanf("%d", &y);
		int z=fun[select](x, y);
		printf("result:%d\n", z);
	} while (1);


	system("pause");
	return 0;
}