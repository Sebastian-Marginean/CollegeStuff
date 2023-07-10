
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 50
#include <stdlib.h>

void impar(int x[], int dim, int* p);
void numar(int x[], int dim, int* p);

int main() {
	int i, dim, * p;
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
	p = &x[0];
	printf("\nNumerele negative impare sunt: ");
	impar(x, dim, p);
	printf("\nNumarul de elemente negative impare este: ");
	numar(x, dim, p);
}

void impar(int x[], int n, int* p) {
	int i;
	for (i = 0; i < n; i++) {
		if (*(p + i) < 0 && abs(*(p + i)) % 2 == 1)
			printf(" %d", *(p + i));
	}
}

void numar(int x[], int n, int* p) {
	int i, a = 0;
	for (i = 0; i < n; i++) {
		if (*(p + i) < 0 && abs(*(p + i)) % 2 == 1) a++;
	}
	printf("%d", a);
}