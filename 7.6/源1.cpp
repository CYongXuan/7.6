#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

static int g_val = 2022;//全局变量 static修饰全局变量

static int Add(int x, int y)
{
	int z = x + y;
	return z;

}

