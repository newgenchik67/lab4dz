#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#define a 7.1e-9
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Введите x:\n");
	double x;
	scanf("%lf", &x);
	printf("Введите y:\n");
	double y;
	scanf("%lf", &y);
	double firstmove = cos(pow(x, 3) + 6) - sin(y - a);
	double secondmove = log(pow(x, 4)) - 2 * pow(sin(x), 5);
	double s = firstmove / secondmove;
	printf("F=:%.6f\n", s);
	return 0;
}
