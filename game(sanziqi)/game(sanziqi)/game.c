#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char Board[ROW][COL], int row, int col)//初始化成空格
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}
void displayBoard(char Board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0;;)
	{

	}
}