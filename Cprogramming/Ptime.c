
#include<stdio.h>
#include<time.h>

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
