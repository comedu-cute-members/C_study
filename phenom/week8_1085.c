#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 
#include<string.h>

int main() {
	int x, y, w, h, width, height;
	scanf("%d%d%d%d", &x, &y, &w, &h);

	if (x * 2 > w) width = w - x;
	else width = x;

	if (y * 2 > h) height = h - y;
	else height = y;

	if (width > height) printf("%d", height);
	else printf("%d", width);
}