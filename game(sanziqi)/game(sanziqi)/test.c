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
	printf("********��Ϸ��ʼ*************\n");
	printf("*****1. �ǣ�������Ϸ*********\n");
	printf("*****0. ���˳���Ϸ*********\n");
	printf("*****************************\n");
}
void Test()
{
	int input = 0;
	do{
		menu();
		printf("����������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룺\n"); 
			break;
		}
	} while (input);

}

int main()
{
	Test();
	return 0;
}