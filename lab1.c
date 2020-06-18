#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)

{
	setlocale(LC_ALL, "RUS");
	float x, y, z, a, b,p;
	printf("Введите значения:\n");
	scanf("%f%f%f", &x, &y, &z);
	p = z + paw(x, 6) / 4;
	if (log(fabs((x - sqrt(fabs(y))) * (x + y / p))) >= 0 || p != 0)
		a = (paw(log(fabs((x - sqrt(fabs(y))) * (x + y / p)))), 1 / 5);
	else
		printf("Невозможно.");

}
/*
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
# define Pi		3.14
int main(void)

{
	setlocale(LC_ALL, "RUS");
	float x, y, z, a, b;
	printf("Введите значения:\n");
	scanf("%f%f%f", &x, &y, &z);
	if ((1 / 2 + pow(sin(fabs(y + 2)), 3)) == 0 || (x + Pi / 2) < -1 || (x + Pi / 2) > 1)
		printf("Невозможно вычислить значение.");
	else
	{
		a = ((2 * sin(y + Pi / 3)) / (1 / 2 + pow(sin(fabs(y + 2)), 3))) + asin(x + Pi / 2);
		printf("a = %f", a);
	}
	if ((3 - cbrt(pow(z, 2))) == 0)
		printf("Невозможно вычислить значение.");
	else
	{
		b = 1 + (pow(z, 2) / 5) / (3 - cbrt(pow(z, 2)));
		printf("\nb = %f", b);
	}
	return 0;
}
*/
//x= -1,57 