
#include"head.h"


/*��������*/
void BGM(void)
{
	PlaySound(TEXT("TheBeginning.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}


/*��ʾ��ǰʱ��*/
void Ptime()
{
	char * wday[] = { "������", "����һ", "���ڶ�", "������", "������", "������", "������" };
	time_t t;
	struct tm *p;
	t = time(NULL);
	p = gmtime(&t);
	printf("����ʱ���ǣ�");
	printf("%d��%2d��%2d��", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
	printf(" %s ", wday[p->tm_wday]);
	printf("%02d:%02d:%02d\n", (8 + p->tm_hour), p->tm_min, p->tm_sec);
}


/*�ƶ���굽ָ��λ��*/
void gotoxy(int x, int y)
{
	COORD coord; // coordinates  
	coord.X = x; coord.Y = y; // X and Y coordinates  
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates  
}


/*������ʾ������txt�ļ�����*/
void hangxian(void)
{
	FILE *fp;
	char ch;
	char hangxian[1000] = { '\0' };
	char filename[100];
	int i = 0;
	printf("��������Ҫ�򿪵��ļ�����·������c:\\temp.txt\n");
	gets(filename);  //���Ҫ�û������ļ��� 
	if (NULL == (fp = fopen(filename, "r")))
	{//���ļ������ж��Ƿ��д򿪴���
		printf("failed to open %s.txt\n", filename);
		return 0;
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		memset(hangxian, 0, sizeof(hangxian));
		fgets(hangxian, sizeof(hangxian) - 1, fp); // ������\n  
		printf("%s", hangxian);
		Sleep(2000);
	}
	fclose(fp);
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

