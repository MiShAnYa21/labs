#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)

{
	setlocale(LC_ALL, "RUS");
	long double a, b;
	printf("a = "); scanf("%lf", &a);

		if (a == 0)
			printf("f(a) = 0");
		if ((a > 0) && (a < 1) || (a < 0))
			printf("f(a) = %f", fabs(a));
		if (a >= 1 && a <= 2)
			printf("f(a) = 1");
		if (a > 2)

		{
			b = -2 * a + 5;
			printf("f(a) = %lf", b);

		}


	_getch();
	return 0;
}



/*
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)

{
	setlocale(LC_ALL, "RUS");
	float a,b;
	printf("a = "); scanf("%f", &a);
	if (a == 0)
		printf("f(a) = 0");
	if ((a > 0) && (a < 1) || (a < 0))
		printf("f(a) = %f", fabs(a));
	if (a >= 1 || a <= 2)
		printf("f(a) = 1");
	if (a > 2)
		{
		b = -2 * a + 5;
			printf("f(a) = %f", b);

		}


	_getch();
	return 0;
}
*/
