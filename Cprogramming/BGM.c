

#include <windows.h>                        //Ϊ����playsound����
#pragma comment(lib, "winmm.lib")           //Ϊ����playsound����

/*��������*/
void BGM(void)
{
	PlaySound(TEXT("TheBeginning.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}