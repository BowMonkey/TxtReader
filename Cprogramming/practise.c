/*
=所有注释都是对应下方程序的功能，同一行的注释表明该行的目的或者注意事项
*/

#include"head.h"

int main(void)                              
{
	system("mode con  cols=150 lines=50");      //控制台大小初始化
	BGM();
	/*在控制台打印封面*/
	system("type fengmian.txt\n");   
	printf("\t\t\t\t\t\t\t\t\t\t\t\t");
	Ptime();
	system("pause");
	system("cls");
	/*以下是清屏之后显示的第二页内容*/
	Ptime();
	hangxian();
	getchar();
	return 0;
}
