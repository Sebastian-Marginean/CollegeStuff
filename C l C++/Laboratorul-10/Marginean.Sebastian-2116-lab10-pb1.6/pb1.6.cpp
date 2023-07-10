
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define DIM1 100
#define DIM2 100

void citireMatrice1(int dim1, int dim2, int* p1);
void citireMatrice2(int dim1, int dim2, int* p2);
void pozPare(int dim1, int dim2, int* p1, int* p2);
void sumaElemImpare(int dim1, int dim2, int* p1, int* p2);
void sumaMatrice(int dim1, int dim2, int* p1, int* p2, int* p3);

int main() {
	int a[DIM1][DIM2], b[DIM1][DIM2], c[DIM1][DIM2], n, m, * p1 = &a[DIM1][DIM2], * p2 = &a[DIM1][DIM2], * p3 = &c[DIM1][DIM2];
	printf("\n Introduceti dimensiunea matricei:");
	scanf_s("%d %d", &n, &m);
	if (n > DIM1 || m > DIM2)
	{
		printf("\n Dimensiunile introduse sunt incorecte!");
	}
	else
	{
		printf("\n Introduceti elementele matricei 1:\n");
		citireMatrice1(m, n, p1);
		printf("\n Introduceti elementele matricei 2:\n");
		citireMatrice2(m, n, p2);
		pozPare(n, m, p1, p2);
		sumaElemImpare(n, m, p1, p2);
		sumaMatrice(n, m, p1, p2, p3);
	}
}

void citireMatrice1(int m, int n, int* p1) {
	printf("\nIntroduceti elementele matricei:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", p1 + (i * n + j));
		}
	}
}
void citireMatrice2(int m, int n, int* p2) {
	printf("\nIntroduceti elementele matricei:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", p2 + (i * n + j));
		}
	}
}
void pozPare(int n, int m, int* p1, int* p2)
{
	printf("\n Pozitiile pare din prima matrice:");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (*(p1 + (i * n + j)) % 2 == 0) {
				printf("\n\t Elementul par %d", *(p1 + (i * n + j)));
				printf(" se afla pe pozitia %d %d", i, j);
			}
		}
	printf("\n");
	printf("\n Pozitiile pare din a doua matrice : ");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (*(p1 + (i * n + j)) % 2 == 0) {
				printf("\n\t Elementul par %d", *(p2 + (i * n + j)));
				printf(" se afla pe pozitia %d %d", i, j);
			}

		}
	printf("\n");
}
void sumaElemImpare(int n, int m, int* p1, int* p2)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (*(p1 + (i * n + j)) % 2 != 0)
				s += *(p2 + (i * n + j));
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (*(p2 + (i * n + j)) % 2 != 0)
				s += *(p2 + (i * n + j));
		}
	printf("\n Suma elementelor impare din cele 2 matrici este: %d", s);
	printf("\n");
}
void sumaMatrice(int n, int m, int* p1, int* p2, int* p3)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			*(p3 + (i * n + j)) = *(p1 + (i * n + j)) + *(p2 + (i * n + j));
	printf("\n Suma acelor matrici este: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			printf("%d", *(p3 + (i * n + j)));
			printf(" ");
		}
		printf("\n");
	}
}