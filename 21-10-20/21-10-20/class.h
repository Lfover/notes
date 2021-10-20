#ifndef _CLASS_H_
#define _CLASS_H_

#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)

void ShowInt(int x);
int Face(int n);
int fib(int n);

#endif





////预处理符，防止头文件被重复包含
//
//
//#ifndef _CLASS_H_
//#define _CLASS_H_
//#include <Windows.h>
//#include <stdio.h>
////编写函数不允许创建临时变量，求字符串长度
//int MyStrlen(const char *str);
//
////int MyAdd(int x, int y);
////int MyDiv(int x, int y);
//
//#endif