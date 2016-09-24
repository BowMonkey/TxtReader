
#include<stdio.h>
#include<time.h>

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
