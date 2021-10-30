#include "mine.h"

static void Menu()
{
	printf("#############################\n");
	printf("########欢迎来到扫雷游戏#######\n");

	printf("#############################\n");
	printf("##   1.play       2.exit   ##\n");
	printf("#############################\n");
	printf("请输入你的选择");
}


int main(){
	int quit = 0;
	do{
		int select=0;
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("当前游戏已经结束。。。再来一次？\n");
			break;
		case 2:
			printf("退出\n");
			quit = 1;
			break;
		default:
			printf("你的输入有误,请重新输入\n");
			break;
		}

	} while (!quit);
	//printf("hello mine clear\n");
	system("pause");
	return 0;
}