#include "mine.h"
////////////////////////////////////////////////////////////////////////////////////////
//初始化
void InitBoard(char board[][COL], int row, int col,char elem)
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			board[i][j] = elem;
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////
//设置雷
void SetMine(char mine[][COL], int row, int col)
{
	int n = NUM;
	while (n){
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (mine[x][y] == '1'){
			continue;
		}
		mine[x][y] = '1';
		n--;
	}
}
/////////////////////////////////////////////////////////////////////////////////////////
//显示面板
void ShowBoard(char board[][COL], int row, int col)
{
	printf("    ");
	for (int i = 1; i <= col - 2; i++){
		printf(" %-2d|", i);
	}
	printf("\n");
		printf("--------------------------------------------\n");

	for (int i = 1; i <= row - 2; i++){
		printf("%2d |", i);
		for (int j = 1; j <= col-2; j++){
			printf(" %-2c|", board[i][j]);
		}
		printf("\n");
			printf("--------------------------------------------\n");

	}
}
/////////////////////////////////////////////////////////////////////////////////////////////
//周围雷的个数
char GetNum(char mine[][COL], int x, int y)
{
	return  mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + \
		mine[x][y - 1] + mine[x][y + 1] + \
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]-7*'0';
	
}
////////////////////////////////////////////////////////////////////////////////////////
//游戏入口
void Game()
{
	srand((unsigned long)time(NULL));
	printf("欢迎你来到挑战\n");
	char board[ROW][COL];
	char mine[ROW][COL];

	InitBoard(board, ROW, COL,'*');  //'*'
	InitBoard(mine, ROW, COL,'0');  //'0'
	SetMine(mine, ROW, COL);
	int count = (ROW - 2)*(COL - 2)-NUM;//没有雷的格子数
	do{
		system("cls");
		int x = 0;
		int y = 0;
		ShowBoard(board, ROW, COL);
		printf("请输入你要扫描的位置\n");
		scanf("%d %d", &x, &y);
		if (x < 1 || x>10 || y < 1 || y>10){
			printf("输入位置错误，请重新输入\n");
			Sleep(2000);
			continue;
		}
		if (board[x][y] != '*'){
			printf("输入位置已经被扫描过了，请重新输入\n");
			Sleep(2000);
			continue;
		}
		if (mine[x][y] == '0'){
			count--;
			char num = GetNum(mine, x, y);
			board[x][y] = num;
		}
		else{
			printf("你输入的位置（%d %d）有雷\n", x, y);
			break;
		}
	}while (count>0);

	if (count > 0){
		printf("扫雷结束，你被炸死了\n");
	}
	else{
		printf("扫雷结束，你成功了\n");
	}
	ShowBoard(mine, ROW, COL);
}