/*
=����ע�Ͷ��Ƕ�Ӧ�·�����Ĺ��ܣ�ͬһ�е�ע�ͱ������е�Ŀ�Ļ���ע������
*/
#include<stdio.h>
#include<stdlib.h>
#include"head.h"

int main(void)                              
{
	system("mode con  cols=150 lines=50");      //����̨��С��ʼ��
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

