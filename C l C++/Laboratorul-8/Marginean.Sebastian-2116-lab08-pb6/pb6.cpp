#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define DIM1 100
#define DIM2 100

void citireMatrice1(int a[DIM1][DIM2], int dim1, int dim2);
void citireMatrice2(int b[DIM1][DIM2], int dim1, int dim2);
void pozPare(int a[DIM1][DIM2], int b[DIM1][DIM2], int dim1, int dim2);
void sumaElemImpare(int a[DIM1][DIM2], int b[DIM1][DIM2], int dim1, int dim2);
void sumaMatrice(int a[DIM1][DIM2], int b[DIM1][DIM2], int dim1, int dim2);

int main() {
	int a[DIM1][DIM2], b[DIM1][DIM2], n, m;
	printf("\n Introduceti dimensiunea matricei:");
	scanf_s("%d %d", &n, &m);
	if (n > DIM1 || m > DIM2)
	{
		printf("\n Dimensiunile introduse sunt incorecte!");
	}
	else
	{
		printf("\n Introduceti elementele matricei 1:\n");
		citireMatrice1(a, n, m);
		printf("\n Introduceti elementele matricei 2:\n");
		citireMatrice2(b, n, m);
		pozPare(a, b, n, m);
		sumaElemImpare(a, b, n, m);
		sumaMatrice(a, b, n, m);
	}
}

void citireMatrice1(int a[DIM1][DIM2], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("\ta[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
}
void citireMatrice2(int b[DIM1][DIM2], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("\ta[%d][%d] = ", i, j);
			scanf_s("%d", &b[i][j]);
		}
}
void pozPare(int a[DIM1][DIM2], int b[DIM1][DIM2], int n, int m)
{
	printf("\n Pozitiile pare din prima matrice:");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] % 2 == 0) {
				printf("\n\t Elementul par %d", a[i][j]);
				printf(" se afla pe pozitia %d %d", i, j);
			}
		}
	printf("\n");
	printf("\n Pozitiile pare din a doua matrice : ");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (b[i][j] % 2 == 0) {
				printf("\n\t Elementul par %d", b[i][j]);
				printf(" se afla pe pozitia %d %d", i, j);
			}

		}
	printf("\n");
}
void sumaElemImpare(int a[DIM1][DIM2], int b[DIM1][DIM2], int n, int m)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] % 2 != 0)
				s += a[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (b[i][j] % 2 != 0)
				s += b[i][j];
		}
	printf("\n Suma elementelor impare din cele 2 matrici este: %d", s);
	printf("\n");
}
void sumaMatrice(int a[DIM1][DIM2], int b[DIM1][DIM2], int n, int m)
{
	int c[DIM1][DIM2];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			c[i][j] = a[i][j] + b[i][j];
	printf("\n Suma acelor matrici este: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			printf("%d", c[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}