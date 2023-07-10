/*4. Cititi de la tastatura elementele a 2 matrici de valori intregi. Scrieti o functie care primeste ca
parametri pointerii la cele 2 matrici si returneaza un pointer la matricea suma. Rezultatul insumarii
matricelor va fi afisat în funcţia main. Afisati elementele de pe diagoanala secundara a matricii suma,
folosind acelasi pointer.*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define DIM 10

void citireMatrice(int, int, int*);
int* sumaMatrice(int*, int*, int*, int, int);

int main() {
	int a[DIM][DIM], b[DIM][DIM], c[DIM][DIM], n, m, * p = &a[DIM][DIM], * p1 = &b[DIM][DIM], * p2 = &c[DIM][DIM];
	printf("\nIntroduceti dimensiunea matricei : ");
	scanf_s("%d %d", &m, &n);
	if (m > DIM || n > DIM)
	{
		printf("\nDimensiunile introduse sunt incorecte!");
	}
	else
	{
		citireMatrice(m, n, p);
		citireMatrice(m, n, p1);
		p2 = sumaMatrice(p, p1, p2, m, n);
		printf("\nMatricea suma este : \n\t");
		for (int i = 0; i < m; i++)
		{
			printf("\n");
			for (int j = 0; j < n; j++) {
				printf("%d ", *(p2 + (i * n + j)));
			}
		}
		printf("\n\nElementele de pe diagonala secundara : \n\t");
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (i == n - j - 1) {
					printf("%d ", *(p2 + (i * n + j)));
				}
	}
}

void citireMatrice(int m, int n, int* p) {
	printf("\nIntroduceti elementele matricei:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", p + (i * n + j));
		}
	}
}

int* sumaMatrice(int* p, int* p1, int* p2, int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			*(p2 + i * n + j) = *(p + i * n + j) + *(p1 + i * n + j);
	return p2;

}