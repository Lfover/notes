#ifndef _CHESS_H_
#define _CHESS_H_

#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
#define BLACK_PIECE 'X'
#define WHITE_PIECE 'O'
#pragma warning (disable:4996)


void Game();
void InitBoard(char board[][COL],int row,int col);
void ShowBoard(char board[][ROW], int row, int col);
int PlayerMove(char board[][COL], int row, int col);
void ComputerMove(char board[][COL], int row, int col);
char JudgeResult(char board[][COL], int row, int col);
#endif