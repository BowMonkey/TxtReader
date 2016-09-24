
#include"head.h"


/*背景音乐*/
void BGM(void)
{
	PlaySound(TEXT("TheBeginning.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}


/*显示当前时间*/
void Ptime()
{
	char * wday[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
	time_t t;
	struct tm *p;
	t = time(NULL);
	p = gmtime(&t);
	printf("现在时间是：");
	printf("%d年%2d月%2d日", (1900 + p->tm_year), (1 + p->tm_mon), p->tm_mday);
	printf(" %s ", wday[p->tm_wday]);
	printf("%02d:%02d:%02d\n", (8 + p->tm_hour), p->tm_min, p->tm_sec);
}


/*移动光标到指定位置*/
void gotoxy(int x, int y)
{
	COORD coord; // coordinates  
	coord.X = x; coord.Y = y; // X and Y coordinates  
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates  
}


/*逐行显示给定的txt文件内容*/
void hangxian(void)
{
	FILE *fp;
	char ch;
	char hangxian[1000] = { '\0' };
	char filename[100];
	int i = 0;
	printf("请输入你要打开的文件名及路径，如c:\\temp.txt\n");
	gets(filename);  //这句要用户输入文件名 
	if (NULL == (fp = fopen(filename, "r")))
	{//打开文件，并判断是否有打开错误
		printf("failed to open %s.txt\n", filename);
		return 0;
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		memset(hangxian, 0, sizeof(hangxian));
		fgets(hangxian, sizeof(hangxian) - 1, fp); // 包含了\n  
		printf("%s", hangxian);
		Sleep(2000);
	}
	fclose(fp);
	printf("\n");
}


/*显示给定的txt文件内容
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
while ( (ch = fgetc(fp)) != EOF)                          //feof()遇到文件尾时返回0，否则返回非0值
{
printf("%c", fgetc(fp));
}
printf("\n");
fclose(fp);
}
*/

