#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
int main(void)
{
	FILE* f;
	int n, m,a,b,i,j,ans;
	int** mas; // указатель на указатель на строку с эл.
	int cout, prob;
	cout = 0; prob = 0; n = 0; m = 0; a = 0; b = 0; i = 0; j = 0; ans = 0;
	setlocale(LC_ALL, "RUS");
	f = fopen("input.txt", "r");
    if (f == NULL)
        printf("Ошибка.");
    else
        printf("Файл открыт.");
	do
	{
		fscanf(f, "%d", &a);
		//printf("%d", a);
		cout++;
	} while (feof(f) == 0);
	printf("\n\nЧисло элементов: %d", cout);
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
	prob++;
	n = cout / prob;         //Строки
	m = prob;               //Столбцы
	printf("\nСтолбцы: %d", m);
	printf("\nСтроки: %d", n);
	fclose(f);
	f = fopen("input.txt", "r");

	// Выделение памяти
	mas = (int**)malloc(n * sizeof(int*));
	// Ввод из файла
	for (i = 0; i < n; i++)  // строки
	{
		// Выделение памяти для строк
		mas[i] = (int*)malloc(m * sizeof(int));
		for (j = 0; j < m; j++)  // столбцы
		{
			fscanf(f, "%d", &mas[i][j]);
			if (mas[i][j] == 0)
				ans++;
		}
	}
	fclose(f);
	f = fopen("output.txt", "w");

	// Вывод
	printf("\n");
	for (i = 0; i < n; i++)  // строки
	{
		for (j = 0; j < m; j++)  // столбцы
		{
			fprintf(f,"%5d ", mas[i][j]); 
		}
		if (i!=m && j!=n)
		fprintf(f,"\n");
	}

	fprintf(f,"     Кол-во нулей: %d", ans);
	fclose(f);

}
