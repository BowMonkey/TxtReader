/*
=����ע�Ͷ��Ƕ�Ӧ�·�����Ĺ��ܣ�ͬһ�е�ע�ͱ������е�Ŀ�Ļ���ע������
*/

#include"head.h"

int main(void)                              
{
	system("mode con  cols=150 lines=50");      //����̨��С��ʼ��
	BGM();
	/*�ڿ���̨��ӡ����*/
	system("type fengmian.txt\n");   
	printf("\t\t\t\t\t\t\t\t\t\t\t\t");
	Ptime();
	system("pause");
	system("cls");
	/*����������֮����ʾ�ĵڶ�ҳ����*/
	Ptime();
	hangxian();
	getchar();
	return 0;
}
