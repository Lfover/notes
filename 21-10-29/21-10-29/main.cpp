#include "chess.h"
////////////////////////////////////////////////////////////////////
//菜单
void Menu()
	{
		printf("#######欢迎来到三子棋游戏#########\n");
		printf("###1.play             2.exit####\n");
		printf("################################\n");
		printf("请输入你的选择\n");
	}
//////////////////////////////////////////////////////////////////////
int main()
{
	int quit= 0;
	while (!quit){
		int select = 0;
		Menu();
        scanf("%d", &select);

		switch (select){
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("enter error");
			break;
		}
	}
	
	system("pause");
	return 0;
}