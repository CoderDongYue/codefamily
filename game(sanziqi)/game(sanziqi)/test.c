#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	char Board[ROW][COL] = { 0 };
	InitBoard(Board[ROW][COL],ROW,COL);
	displayBoard(Board[ROW][COL],ROW,COL);
	Playermove(Board, ROW, COL);
	Computermove(Board, ROW, COL);
}
void menu()
{
	printf("*****************************\n");
	printf("********游戏开始*************\n");
	printf("*****1. 是，进入游戏*********\n");
	printf("*****0. 否，退出游戏*********\n");
	printf("*****************************\n");
}
void Test()
{
	int input = 0;
	do{
		menu();
		printf("请输入您的选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入：\n"); 
			break;
		}
	} while (input);

}

int main()
{
	Test();
	return 0;
}