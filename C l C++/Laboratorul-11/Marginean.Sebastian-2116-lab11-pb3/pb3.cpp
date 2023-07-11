/*. Sa se scrie o aplicatie C, care aloca dinamic memorie pentru stocarea elementelor a doua matrici de "m" linii si "n" coloane.
Sa se scrie o functie care calculeaza suma celor doua matrici si o functie pentru afisarea unei matrici.
Sa se afiseze matricile initiale si matricea obtinuta.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void afisareMatrice(int*, int, int);
void sumaMatrice(int*, int*, int*, int, int);

int main() {
	int* x, m, n, i, j;
	int* x1, * x2;
	printf("\n Introduceti doua numere intregi pozitive pentru numarul de linii si coloane: ");
	scanf_s("%d %d", &m, &n);
	if ((m <= 0) || (n <= 0)) {
		printf("\nNumerele nu sunt valide");
		return 0;
	}
	x = (int*)malloc(m * n * sizeof(int));
	if ((x1 = (int*)malloc(m * n * sizeof(int)))) {
		printf("\nIntroduceti elementele primei matrici:");
		for (i = 0; i < m; i++) {
			printf("\nLinia %d :", i + 1);
			for (j = 0; j < n; j++)
				scanf_s("%d", x1 + i * n + j);
		}
	}
	if ((x2 = (int*)malloc(m * n * sizeof(int)))) {
		printf("\nIntroduceti elementele primei matrici:");
		for (i = 0; i < m; i++) {
			printf("\nLinia %d :", i + 1);
			for (j = 0; j < n; j++)
				scanf_s("%d", x2 + i * n + j);
		}
	}
	printf("Prima matrice este: \n");
	afisareMatrice(x1, m, n);
	printf("A doua matrice este: \n");
	afisareMatrice(x2, m, n);
	printf("Suma matricilor este: \n");
	sumaMatrice(x, x1, x2, m, n);
}
void afisareMatrice(int* x, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			printf("\t%d ", *(x + m * i + j));
		printf("\n");
	}
}

void sumaMatrice(int* x, int* x1, int* x2, int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			*(x + m * i + j) = *(x1 + m * i + j) + *(x2 + m * i + j);
	afisareMatrice(x, m, n);
}