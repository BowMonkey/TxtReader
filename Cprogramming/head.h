#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>                            //������ʾ������
#include <windows.h>                        //Ϊ����playsound����
#pragma comment(lib, "winmm.lib")           //Ϊ����playsound����

void BGM(void);                              //�����������ֺ���
void Ptime(void);                            //������ǰʱ����ʾ����
void gotoxy(int x, int y);                   //����Ƶ�ָ��λ��
											 //void ShowTxt(char *filemane);                
//void ShowTxt(char *filename);		         //��ʾ����txt�ļ�������
void hangxian(void);               //������ʾ����txt�ļ�������
