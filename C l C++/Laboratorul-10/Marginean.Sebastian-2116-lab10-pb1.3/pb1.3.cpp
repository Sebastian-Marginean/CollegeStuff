/*1. Rezolva�i problemele din laboratorul de aplica�ii cu tablouri (laboratorul 8, problemele 1-12)
folosind pointeri.*/

/*3. Scrieti o aplicatie care citeste de la tastatura un sir de 10 valori intregi. Definiti o functie care
primeste sirul ca parametru si apoi il afiseaza ordonat crescator*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 10

void ordonare(int*, int);

int main() {
	int i, dim;
	int x[DIM];
	int* px;
	px = x;
	printf("\nIntroduceti dimensiunea tabloului: ");
	scanf_s(" %d", &dim);
	if (dim > DIM) {
		printf("\n Dimensiune prea mare !");
		return 0;
	}
	printf("\n Introduceti elementele tabloului:\n");
	for (i = 0; i < dim; i++) {
		printf("\tx[%d] = ", i);
		scanf_s("%d", px + i);
	}
	printf("\nSirul ordonat crescator este: ");
	ordonare(px, dim);
}

void ordonare(int* p, int n) {
	int i, j, aux;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (*(p + i) > *(p + j)) {
				aux = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = aux;
			}
	for (i = 0; i < n; i++)
		printf("%d ", *(p + i));
}