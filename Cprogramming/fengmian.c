#include<stdio.h>
#include<stdlib.h>
#include"head.h"


/*封面*/
int fengmian(void)
{
	int i;
	/*在控制台打印封面*/
	system("type fengmian.txt\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t");
	Ptime();
	system("pause");
	system("cls");
	/*以下是清屏之后显示的第二页内容*/
	Ptime();
	gotoxy(70, 2);
	printf("TxtReader\n");
	gotoxy(70, 5);
	printf("1.功能一\n");
	gotoxy(70, 6);
	printf("2.功能二\n");
	gotoxy(70, 7);
	printf("3.功能三\n");
	scanf("%d", &i);
	return i;
}
