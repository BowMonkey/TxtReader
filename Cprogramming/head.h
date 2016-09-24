#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>                            //封面显示日期用
#include <windows.h>                        //为了用playsound函数
#pragma comment(lib, "winmm.lib")           //为了用playsound函数

void BGM(void);                              //声明背景音乐函数
void Ptime(void);                            //声明当前时间显示函数
void gotoxy(int x, int y);                   //光标移到指定位置
											 //void ShowTxt(char *filemane);                
//void ShowTxt(char *filename);		         //显示给定txt文件的内容
void hangxian(void);               //逐行显示给定txt文件的内容
