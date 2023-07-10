/*1. Rezolvati problemele din laboratorul de aplicatii cu tablouri (laboratorul 8, problemele 1-12)
folosind pointeri.*/

/*2. Scrieti un program pentru determinarea celui mai mic element pozitiv dintr-un tablou unidimensional.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 50

int poz(int*, int);

int main() {
	int i, dim, miniPoz;
	int x[DIM], * px;
	px = x;
	printf("\nIntroduceti dimensiunea tabloului: ");
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
	miniPoz = poz(px, dim);
	if (miniPoz != 0)
		printf("\nCel mai mic elemnt pozitiv este: %d\n", miniPoz);
	else
		printf("Nu exista numere pozitive");
}

int poz(int* p, int n) {
	int mini = 0, ok = 1;
	for (int i = 0; i < n; i++) {
		if (*(p + i) > 0) {
			if (ok == 1) {
				mini = *(p + i);
				ok = 0;
			}
			else
				if (*(p + i) < mini)mini = *(p + i);
		}
	}
	return mini;
}