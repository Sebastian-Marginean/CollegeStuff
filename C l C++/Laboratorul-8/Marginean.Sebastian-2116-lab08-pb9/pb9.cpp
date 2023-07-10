#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 50
#include <stdlib.h>

void impar(int x[], int dim);
void numar(int x[], int dim);

int main() {
	int i, dim;
	int x[DIM];
	printf("\nIntroduceti dimensiunea tabloului: ");
	scanf_s("%d", &dim);
	if (dim > DIM) {
		printf("\nDimensiune prea mare !");
		return 0;
	}
	printf("\nIntroduceti elementele tabloului:\n");
	for (i = 0; i < dim; i++) {
		printf("\tx[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("\nNumerele negative impare sunt: ");
	impar(x, dim);
	printf("\nNumarul de elemente negative impare este: ");
	numar(x, dim);
}

void impar(int x[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (x[i] < 0 && abs(x[i]) % 2 == 1)
			printf(" %d", x[i]);
	}
}

void numar(int x[], int n) {
	int i, a = 0;
	for (i = 0; i < n; i++) {
		if (x[i] < 0 && abs(x[i]) % 2 == 1) a++;
	}
	printf("%d", a);
}