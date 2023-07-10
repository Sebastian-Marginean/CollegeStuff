#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 20

void functie(int x[], int dim);

int main() {
	int i, dim, neg = 0, poz = 0;
	float sumaNeg = 0, sumaPoz = 0;
	int x[DIM];
	printf("\nIntroduceti dimensiunea tabloului: ");
	scanf_s("%d", &dim);
	if (dim > DIM) {
		printf("\n Dimensiune prea mare !");
		return 0;
	}
	printf("\n Introduceti elementele tabloului:\n");
	for (i = 0; i < dim; i++) {
		printf("\tx[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	functie(x, dim);
}

void functie(int x[], int n) {
	float sumaNeg = 0, sumaPoz = 0, neg = 0, poz = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] < 0) {
			sumaNeg = sumaNeg + x[i];
			neg++;
		}
		else
		{
			sumaPoz = sumaPoz + x[i];
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
		printf("\nNu exista numere negative.");
}