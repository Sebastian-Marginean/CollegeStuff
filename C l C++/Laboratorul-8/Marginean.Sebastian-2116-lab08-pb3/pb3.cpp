#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 10

void ordonare(int[], int);

int main() {
	int i, dim;
	int x[DIM];
	printf("\nIntroduceti dimensiunea tabloului: ");
	scanf_s(" %d", &dim);
	if (dim > DIM) {
		printf("\n Dimensiune prea mare !");
		return 0;
	}
	printf("\n Introduceti elementele tabloului:\n");
	for (i = 0; i < dim; i++) {
		printf("\tx[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("\nSirul ordonat crescator este: ");
	ordonare(x, dim);
}

void ordonare(int x[], int n) {
	int i, j, aux;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (x[i] > x[j]) {
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
	for (i = 0; i < n; i++)
		printf("%d ", x[i]);
}