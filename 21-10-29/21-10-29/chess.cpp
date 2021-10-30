#include "chess.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//初始化棋盘
void InitBoard(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			board[i][j]=' ';
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
//展示棋盘
void ShowBoard(char board[][COL], int row, int col)
{
	printf("   | 0 | 1 | 2 |\n");
	int i = 0;
	for (; i < row; i++){
		printf("----------------\n");
		printf("  %d | %c | %c | %c |\n", i, board[i][0], board[i][1], board[i][2]);
	}
	printf("----------------\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//玩家下棋
int PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("please enter your pos<x,y>#");
	scanf("%d %d", &x, &y);
	if (x >= 0 && x <= 2 && y >= 0 && y <= 2){
		if (board[x][y] != ' '){
			return 2;
		}
		board[x][y] = BLACK_PIECE;
		return 0;
	}
		return 1;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//电脑下棋
void ComputerMove(char board[][COL], int row, int col)
{
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i][j] == ' '){
			board[i][j] = WHITE_PIECE;
			break;
		}
	}
	printf("computer.....done\n");
	Sleep(100);
}
///////////////////////////////////////////////////////////////////////////////////////////////////
//判断输赢
char JudgeResult(char board[][COL], int row, int col)
{
	int i = 0;
	for (; i < row; i++){
		if (board[i][0]!=' '&&board[i][0] == board[i][1] && board[i][1] == board[i][2]){
			return board[i][0];
		}
	}
	for (int i = 0; i < col; i++){
		if (board[0][i]!=' '&&board[0][i] == board[1][i] && board[1][i] == board[2][i]){
			return board[0][i];
		}
	}
	if (board[0][0] !=' '&&board[0][0] == board[1][1] && board[1][1] == board[2][2]){
		return board[0][0];
	}
	if (board[0][2] !=' '&&board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return board[1][1];
	}

	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (board[i][j] == ' '){
				return 'N';
			}
		}
	}
	return 'E';
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
void Game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	char result = 'N';
	srand((unsigned long)time(NULL));

	while (1){
	ShowBoard(board, ROW, COL);
	int type=PlayerMove(board, ROW, COL);
	if (1 == type){
		printf("你输入的坐标有误，请重新输入\n");
		continue;
	}
	else if (2 == type){
		printf("你输入的坐标已经被占用，请重新输入\n");
		continue;
	}
	else if(0==type){
		printf("Player.....Done\n");
	}
		result=JudgeResult(board, ROW, COL);
		if (result != 'N'){
			break;
		}
		ComputerMove(board, ROW, COL);
		result=JudgeResult(board, ROW, COL);
		if (result != 'N'){
			break;
		}
	}
	ShowBoard(board, ROW, COL);
	switch (result){
	case 'E':
		printf("平局\n");
		break;

	case BLACK_PIECE:
		printf("你赢啦\n");
		break;

	case WHITE_PIECE:
		printf("你输啦\n");
		break;

	default:
		break;
	}
}