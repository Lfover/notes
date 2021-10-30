#ifndef _MINE_H_
#define _MINE_H_

#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
#define ROW 12
#define COL 12
#define NUM 20
#include <stdlib.h>
#include  <time.h>



void Game();
void InitBoard(char board[][COL], int row, int col,char elem);
void SetMine(char mine[][COL],int row,int col);
void ShowBoard(char board[][COL], int row, int col);
char GetNum(char mine[][COL], int x, int y);


#endif