#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)

{
	setlocale(LC_ALL, "RUS");
	float a = 0;
	long double n, i;
	printf("a = ");
	scanf("%f", &a);
	n = 1;
	i = 1;
	while (i<a)
	{
		n++;
		i += 1 / n;
	}
	printf("Наименьшее n : %lf", n);

}