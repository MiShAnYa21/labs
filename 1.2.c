#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include < string.h > 
int main(void)

{
	setlocale(LC_ALL, "RUS");
	int n, k, mas[10],z,len,p;
	memset(mas, 0, sizeof(mas));
	z = 0; len = 0;
	printf("n = ");
	scanf("%d", &n);
	p = n;
	while (p != 0)
	{
		p /= 10;
		len++;
	}
	for (int i = 0; i < len; i++)
	{
		k = n % 10;
		mas[k]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] == 3)
		{
			printf("Верно.\n");
			z = 1;
			break;
		}

	}
	if (z == 0)
		printf("Неверно.\n");
		


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
	printf("n = ");
	scanf("%d", &n);
	int n1 = n / 1000;
	int n2 = (n / 100) % 10;
	int n3 = (n / 10) % 10;
	int n4 = n % 10;
	if ((n1 == n2 && n2 == n3) || (n2 == n3 && n3 == n4) || (n1 == n3 && n1 == n4) || (n1 == n2 && n2 == n4))
		printf("Верно.\n");
	else
		printf("Неверно.");
}
*/