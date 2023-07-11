/*5. Sa se scrie o aplicatie C, care aloca dinamic memorie pentru stocarea elementelor unei matrici de dimensiune nxn.
Sa se scrie o functie care calculeaza suma numerelor pozitive pare de sub diagonala principala si o functie pentru afisarea matricei.
Sa se afiseze matricea si suma ceruta. Eliberati memoria alocata dinamic.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sumaMatrice(int*, int);
void afisare(int*, int);

int main() {
	int* matrice, n, i, j;
	printf("\n Introduceti un numar intreg pozitiv: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("\nNumar invalid");
		return 0;
	}
	if ((matrice = (int*)malloc(n * n * sizeof(int)))) {
		printf("\nIntroduceti elementele matricei:");
		for (i = 0; i < n; i++) {
			printf("\nLinia %d :", i + 1);
			for (j = 0; j < n; j++)
				scanf_s("%d", matrice + i * n + j);
		}
		afisare(matrice, n);
		sumaMatrice(matrice, n);
	}
	else {
		printf("\n Eroare de alocare !");
		return 0;
	}
	if (matrice)
		free(matrice);
}

void sumaMatrice(int* matrice, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i > j && *(matrice + n * i + j) > 0)
				suma = suma + *(matrice + n * i + j);
	printf("\n Suma numerelor pozitive pare de sub diagonala principala este: %d", suma);
}

void afisare(int* matrice, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ", *(matrice + i * n + j));
		printf("\n");
	}
}