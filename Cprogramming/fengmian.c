#include<stdio.h>
#include<stdlib.h>
#include"head.h"


/*����*/
int fengmian(void)
{
	int i;
	/*�ڿ���̨��ӡ����*/
	system("type fengmian.txt\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t\t");
	Ptime();
	system("pause");
	system("cls");
	/*����������֮����ʾ�ĵڶ�ҳ����*/
	Ptime();
	gotoxy(70, 2);
	printf("TxtReader\n");
	gotoxy(70, 5);
	printf("1.����һ\n");
	gotoxy(70, 6);
	printf("2.���ܶ�\n");
	gotoxy(70, 7);
	printf("3.������\n");
	scanf("%d", &i);
	return i;
}
