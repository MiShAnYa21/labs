#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)

{
	setlocale(LC_ALL, "RUS");
	int n;
	long double x,ans,k;
	printf("Введите n: ");
	scanf("%d", &n);
	printf("Введите x: ");
	scanf("%lf", &x);
	ans = 1;
	for (int i = 0; i < n + 1; i++)
	{
		k = pow(2, i);
		ans *= (x + cos(i * x)) / (k);
	}
	printf("Ответ: %lf", ans);

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
	int n;
	float x,ans;
	printf("Введите n: ");
	scanf("%d", &n);
	printf("Введите x: ");
	scanf("%f", &x);
	ans = 1;
	for (int i = 0; i < n + 1; i++)
	{
		ans *= (x + cos(i * x)) / (pow(2, i));
	}
	printf("Ответ: %f", ans);

}
*/

