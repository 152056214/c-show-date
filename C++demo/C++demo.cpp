// C++demo.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <time.h>
#include <stdio.h>

int main()
{
	time_t ltime;
	struct tm t;
	time(&ltime);
	localtime_s(&t,&ltime);
	printf("date:%d-%d-%d %d:%d:%d", t.tm_year+1990,t.tm_mon+1,t.tm_mday,t.tm_hour,t.tm_min,t.tm_sec);

	return 0;
}

