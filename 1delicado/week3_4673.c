#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int d(int i)
{
	int num = 0;
	num = i + i / 10000 + i / 1000 % 10 + i / 100 % 10 + i % 100 / 10 + i % 10;
	if (num < 10001)
		return num;
	else
		return 0;
}

int main(void)
{
	int i = 0;
	bool a[10001] = { 0 }; //자료 크기 커서 bool로 처리
	for (i = 1; i < 100001; i++) //셀프넘버 아닌 애들 true 처리
		a[d(i)] = true;
	for (i = 1; i < 10001; i++)//셀프넘버 출력
		if (a[i] != true)
			printf("%d\n", i);
	return 0;
}