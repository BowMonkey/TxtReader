#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

/*������ʾ������txt�ļ�����*/
void hangxian(void)
{
	FILE *fp;
	char ch;
	char hangxian[1000] = { '\0' };
	char filename[100];
	int i = 0;

	system("cls");

	printf("��������Ҫ�򿪵��ļ�����·������c:\\temp.txt\n");
	//gets(filename);  //���Ҫ�û������ļ��� 
	scanf("%s", filename);

	system("cls");

	if (NULL == (fp = fopen(filename, "r")))
	{//���ļ������ж��Ƿ��д򿪴���
		printf("failed to open %s.txt\n", filename);
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		memset(hangxian, 0, sizeof(hangxian));
		fgets(hangxian, sizeof(hangxian) - 1, fp); // ������\n  
		printf("%s", hangxian);
		Sleep(2000);
	}
	fclose(fp);
	system("pause");
	printf("\n");
}


/*��ʾ������txt�ļ�����
void ShowTxt(char *filename)
{
FILE *fp;
char ch;
if (filename == NULL)
{
printf("Usage: ShowTxt + file name\n");
exit(0);
}
fp = fopen(filename, "r");
if (fp == NULL)
{
printf("Can't find txt file!\n");
exit(-1);
}
while ( (ch = fgetc(fp)) != EOF)                          //feof()�����ļ�βʱ����0�����򷵻ط�0ֵ
{
printf("%c", fgetc(fp));
}
printf("\n");
fclose(fp);
}
*/
