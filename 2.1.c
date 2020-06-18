#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define SIZE 10000
int main(void)
{
	setlocale(LC_ALL, "RUS");
	float mas[SIZE] = { 0 };
	float a, sr;
	int k, imin;
	sr = 0;
	printf("Введите кол-во членов последователности: "); scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%f", &a);
		sr += a;
		mas[i] = a;
	}

	imin = 0;
	for (int i = 0; i < k; i++) {
		if (mas[imin] > mas[i])
			imin = i;
	}




	sr = floor(sr / k);
	for (int i = k; i >= 0; i--)
	{
		if (mas[i] == mas[imin])
		{
			mas[i] = sr;
			break;
		}
	}
	for (int i = 0; i < k; i++)
	{
		if (mas[i] == mas[imin])
		{
			mas[i] = sr;
			break;
		}

	}
	for (int i = 0; i < k; i++)
	{
		printf("  %f  ", mas[i]);
	}

}
/*
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define SIZE 10000
int main(void)
{
	setlocale(LC_ALL, "RUS");
	float mas[SIZE] = {0};
	float a,min,sr;
	int k;
	sr = 0;
	min = 1000000;
	printf("Введите кол-во членов последователности: "); scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%f", &a);
		if (min > a)
			min = a;
		sr += a;
		mas[i] = a;
	}
	sr = floor(sr / k);
	for (int i = k; i >= 0; i--)
	{
		if (mas[i] == min)
		{
			mas[i] = sr;
			break;
		}
	}
	for (int i = 0; i < k; i++)
	{
		if (mas[i] == min)
		{ 
			mas[i] = sr;
			break;
		}

	}
	for (int i = 0; i < k; i++)
	{
		printf("  %f  ", mas[i]);
	}

}
*/