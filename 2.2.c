#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define SIZE 5
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int mas[SIZE] = {0};
	int a, p;
	int k,max;
	p = 1; max = 0;
	printf("Введите кол-во членов последователности: "); scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &a);
		mas[i] = a;
	}
	for (int i = 0; i < k; i++)
	{
		/*
		if (i + 1 > SIZE)
		{
			printf("Выход за границу массива.");
			exit(1);
		}
		*/
		if (mas[i] == mas[i + 1])
			p++;
		if (mas[i] != mas[i + 1])
			if (max < p)
			{
				max = p;
				p = 1;
			}
	}
	printf("\n\n%d", max);
}
