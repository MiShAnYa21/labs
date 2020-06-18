#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#define n 2
//#define n 4
int main(void)

{
	setlocale(LC_ALL, "RUS");
	int mat[4][4] = {
		{1, 2, 3456, 4},
		{5, 6, 7, 8},
		{9, 34, 2, 3},
		{4, 5, 6, 7}
	};
	/*
	int mat[8][8] = {
	{1, 2, 3, 4, 7, 1, 0, 0},
	{5, 6, 7, 8, 0, 4, 5, 1},
	{9, 1, 2, 3, 5, 6, 5, 6},
	{4, 5, 6, 7, 1, 5, 7, 0},
	{9, 2, 6, 4, 1, 1, 2, 4},
	{9, 1, 7, 5, 0, 4, 5, 0},
	{1, 4, 7, 3, 1, 1, 0, 5},
	{3, 4, 6, 7, 6, 6, 7, 0}
	};
	*/
	int mat1[n][n], mat2[n][n], mat3[n][n], mat4[n][n];
	int i, j, a, b,z,len,p,mlen,o;
	z = 0; len = 0; mlen = 0;
	//Поиск максимальной длины числа.
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			p = mat[i][j];
			len = 0;
			while (p != 0)
			{
				p /= 10;
				len++;
			}
			if (mlen < len)
				mlen = len+2;
		}
	}
	printf("Входная матрица: \n");
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			printf("%d",mat[i][j]);
			//Вывод отступа
			len = 0;
			p = mat[i][j];
			while (p != 0)
			{
				p /= 10;
				len++;
			}
			for (o = 0; o < mlen - len; o++)
				printf(" ");
			
		}
		printf("\n");
	}
	printf("\n");
	//лево верх
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			mat1[i][j] = mat[i][j];
	//право верх
	for (i = 0; i < n; i++)
		for (j = n,b = 0; j < 2*n; j++, b++)
			mat2[i][b] = mat[i][j];
	//лево низ
	for (i = n,a = 0; i < n*2; i++, a++)
		for (j = 0, b = 0; j < n; j++,b++)
			mat3[a][b] = mat[i][j];
	//право низ
	for (i = n, a = 0; i < n * 2; i++, a++)
		for (j = n, b = 0; j < n*2; j++, b++)
			mat4[a][b] = mat[i][j];
	/*
	printf("\nЛево верх: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	printf("\nПраво верх: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	printf("\nЛево низ: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", mat3[i][j]);
		}
		printf("\n");
	}
	printf("\nПраво низ: \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", mat4[i][j]);
		}
		printf("\n");
	}
	*/


	//лево верх
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			mat[i][j] = mat4[i][j];
	//право верх
	for (i = 0; i < n; i++)
		for (j = n, b = 0; j < 2 * n; j++, b++)
			mat[i][j] = mat3[i][b];
	//лево низ
	for (i = n, a = 0; i < n * 2; i++, a++)
		for (j = 0, b = 0; j < n; j++, b++)
			mat[i][j] = mat2[a][b];
	//право низ
	for (i = n, a = 0; i < n * 2; i++, a++)
		for (j = n, b = 0; j < n * 2; j++, b++)
			mat[i][j] = mat1[a][b];

	printf("\nИзменённая матрица: \n");
	for (i = 0; i < 2 * n; i++)
	{
		for (j = 0; j < 2 * n; j++)
		{
			printf("%d ", mat[i][j]);
			//Вывод отступа
			len = 0;
			p = mat[i][j];
			while (p != 0)
			{
				p /= 10;
				len++;
			}
			for (o = 0; o < mlen - len; o++)
				printf(" ");
		}
		printf("\n");
	}



	
}
