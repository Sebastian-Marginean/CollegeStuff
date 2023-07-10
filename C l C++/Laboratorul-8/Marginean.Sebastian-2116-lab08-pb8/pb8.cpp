#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 50

float valMed(int x[], int dim);
void valMari(int x[], int dim, int a);

int main() {
	int i, dim;
	int x[DIM];
	float a;
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
	printf("\nValoarea medie este: %.2f\n", valMed(x, dim));
	a = valMed(x, dim);
	printf("\nValorile din tablou mai mari dec�t valoarea medie calculata sunt:");
	valMari(x, dim, a);


}

float valMed(int x[], int n) {
	int i;
	float sum = 0;
	for (i = 0; i < n; i++)
		sum += x[i];
	return sum / n;
}

void valMari(int x[], int n, int a) {
	for (int i = 0; i < n; i++) {
		if (x[i] > a) printf(" %d", x[i]);
	}
}