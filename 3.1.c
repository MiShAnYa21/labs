
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS 
int main(void)
{
	FILE* f;
	setlocale(LC_ALL, "RUS");
	f = fopen("input.txt", "r");
	if (f == NULL)
		printf("Ошибка.");
	else
	{
		printf("Файл открыт.\n");
	}
}























/*
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	int a,m, n,i,j;
	int** mas;
	int cout, prob;
	char b;
	FILE* f;
	setlocale(LC_ALL, "RUS");
	cout = 0; prob = 0; b = 0; n = 0; m = 0;
	f = fopen("input.txt", "r");
	if (f == NULL)
		printf("Ошибка.");
	else
	{ 
		printf("Файл открыт.\n");

		do
		{
			fscanf(f, "%d", &a);
			//printf("%d", a);
			cout++;
		} while (feof(f) == 0);
		//printf("\n\nЧисло элементов: %d", cout);
		fclose(f);
		f = fopen("input.txt", "r");
		do
		{ 
			b = fgetc(f);
		    //printf("\nb = %c", b);
			if (b == ' ')
				prob++;
			if (b == '\n')
				break;
		} while (feof(f) == 0);
		//printf("\nprob= %d\n", prob);
		prob++;
		n = cout / prob;
		m = prob;

		//Выделение памяти
		mas = (int**)malloc(n * sizeof(int*));
		//выделение динамической памяти под массив указателей
		for (int i = 0; i < n; i++)
			mas[i] = (int*)malloc(m * sizeof(int));
		//выделение динамической памяти для массива значений
		fclose(f);
		f = fopen("input.txt", "r");
		//Ввод
		for (i = 0; i < n; i++)  // цикл по строкам
		{
			for (j = 0; j < m; j++)  // цикл по столбцам
			{
				fscanf(f, "%d", mas[i][j]);
			}
		}
		//вывод
		for (i = 0; i < n; i++)  // цикл по строкам
		{
			for (j = 0; j < m; j++)  // цикл по столбцам
			{
				printf("%5d ", mas[i][j]);
			}
			printf("\n");
		}




		//Выделение памяти
		mas = (int*)malloc(n * m * sizeof(int));
		fclose(f);
		f = fopen("input.txt", "r");
		// Ввод массива
		for (i = 0; i < n; i++)  // цикл по строкам
		{
			for (j = 0; j < m; j++)  // цикл по столбцам
			{
				fscanf(f, "%d", (mas + i * m + j));
			}
		}
		// Вывод массива

		for (i = 0; i < n; i++)  // цикл по строкам
		{
			for (j = 0; j < m; j++)  // цикл по столбцам
			{
				printf("%5d ", *(mas + i * m + j)); 
			}
			printf("\n");
		}
		free(mas);


	}

}
		*/