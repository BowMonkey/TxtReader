/*
=所有注释都是对应下方程序的功能，同一行的注释表明该行的目的或者注意事项
*/
#include<stdio.h>
#include<stdlib.h>
#include"head.h"

int main(void)                              
{
	system("mode con  cols=150 lines=50");      //控制台大小初始化
	BGM();

	switch (fengmian())
	{
	case 1:hangxian();
		 break;
	case 2:printf("2"); break;
	case 3:printf("3"); break;
	default:printf("Please enter 1.2 or 3!\n");
		break;
	}

	return 0;
}

