/*1. Rezolvati problemele din laboratorul de aplicatii cu tablouri (laboratorul 8, problemele 1-12)
folosind pointeri.*/

/*1. Scrieti un program pentru determinarea valorii medii a elementelor pozitive/negative dintr-un
tablou unidimensional.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 20

void functie(int*, int dim);

int main() {
	int i, dim, neg = 0, poz = 0;
	float sumaNeg = 0, sumaPoz = 0;
	int x[DIM], * px;
	px = x;
	printf("Introduceti dimensiunea tabloului: ");
	scanf_s("%d", &dim);
	if (dim > DIM) {
		printf("\n Dimensiune prea mare !");
		return 0;
	}
	printf("\n Introduceti elementele tabloului:\n");
	for (i = 0; i < dim; i++) {
		printf("\tx[%d] = ", i);
		scanf_s("%d", px + i);
	}
	functie(px, dim);
}

void functie(int* p, int n) {
	float sumaNeg = 0, sumaPoz = 0, neg = 0, poz = 0;
	for (int i = 0; i < n; i++) {
		if (*(p + i) < 0) {
			sumaNeg = sumaNeg + *(p + i);
			neg++;
		}
		else
		{
			sumaPoz = sumaPoz + *(p + i);
			poz++;
		}
	}

	if (poz > 0) {
		sumaPoz = sumaPoz / poz;
		printf("\nValoarea medie a elementelor pozitive dintr-un tablou unidimensional este: %.3f\n", sumaPoz);
	}
	else
		printf("\nNu exista numere pozitive.");

	if (neg > 0) {
		sumaNeg = sumaNeg / neg;
		printf("\nValoarea medie a elementelor negative dintr-un tablou unidimensional este: %.3f\n", sumaNeg);
	}
	else
		printf("\nNu exista numere negative.\n");
}