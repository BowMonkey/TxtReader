#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

/*逐行显示给定的txt文件内容*/
void hangxian(void)
{
	FILE *fp;
	char ch;
	char hangxian[1000] = { '\0' };
	char filename[100];
	int i = 0;

	system("cls");

	printf("请输入你要打开的文件名及路径，如c:\\temp.txt\n");
	//gets(filename);  //这句要用户输入文件名 
	scanf("%s", filename);

	system("cls");

	if (NULL == (fp = fopen(filename, "r")))
	{//打开文件，并判断是否有打开错误
		printf("failed to open %s.txt\n", filename);
	}
	while ((ch = fgetc(fp)) != EOF)
	{
		memset(hangxian, 0, sizeof(hangxian));
		fgets(hangxian, sizeof(hangxian) - 1, fp); // 包含了\n  
		printf("%s", hangxian);
		Sleep(2000);
	}
	fclose(fp);
	system("pause");
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
