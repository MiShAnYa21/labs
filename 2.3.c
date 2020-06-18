#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define SIZE 1000
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int mas[SIZE] = {0};
	int mas1[SIZE] = {0};
	int a, p,max,k,min,j;
	max = 0; j = 0;
	printf("Введите кол-во членов последователности: "); scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &a);
		mas[i] = a;
	}
	max = 0;
	min = 0;
	for (int i = 0; i < k; i++) {
		if (mas[max] < mas[i])
			max = i;
		if (mas[min] > mas[i])
			min = i;
	}

	/*
	for (int i = k; i >= 0; i--)
	{
		if (mas[i] == mas[max])
		{
			mas[i] = mas[min];
			break;
		}
	}
	*/
	for (int i = k; mas[i] != mas[max]; i--)
	{
		if (mas[i] == mas[max])
			mas[i] = mas[min];
	}
	
	for (int i = 0; i < k; i++)
	{
		if (mas[i] != mas[max])
		{
			mas1[j] = mas[i];
			j++;
		}

	}
	for (int i = 0; i < j; i++)
	{
		printf("%d ", mas1[i]);
	}

}