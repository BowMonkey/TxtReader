

#include <windows.h>                        //为了用playsound函数
#pragma comment(lib, "winmm.lib")           //为了用playsound函数

/*背景音乐*/
void BGM(void)
{
	PlaySound(TEXT("TheBeginning.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}