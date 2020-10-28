#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

//длина отрезка по координатам его концов
int main(void) {
	long double  x1, x2, y1, y2, k;
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	k = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("%lf", k);
	return(0);
}