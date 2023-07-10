
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define DIM 50

int nrPoz(int x[DIM], int, int* p);
void rest(int x[DIM], int, int* p);

int main() {
	int i, dim, * p;
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
	p = &x[0];
	rest(x, dim, p);
}

int nrPoz(int x[DIM], int n, int* p) {
	int nr = 0;
	for (int i = 0; i < n; i++) {
		if (*(p + i) > 0)nr++;
	}
	return nr;
}

void rest(int x[DIM], int n, int* p) {
	int k = nrPoz(x, n, p), contor = 0, y[DIM];
	if (k == 0)
		printf("Nu sunt numere pozitive in vector.");
	else {
		for (int i = 0; i < n; i++) {
			if (k == 1)
				y[contor++] = 0;
			else if (*(p + i) >= 0 || abs(*(p + i) % k) == 0) y[contor++] = *(p + i) % k;
			else if (*(p + i) < 0) y[contor++] = k + *(p + i) % k;
		}
		printf("Resturile impartirii elementelor primului tablou la numarul elementelor pozitive din acesta sunt: ");
		for (int i = 0; i < n; i++)
			printf(" %d", y[i]);
	}
}