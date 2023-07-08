/*11. S� se scrie un program care cite�te de la tastatur� n numere �ntregi. Afi�a�i toate numerele
impare din �ir*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, a;
	printf("Scrieti un numar intreg: ");
	scanf_s("%d", &n);
	printf("Numerele impare din sir sunt: ");
	while (n) {
		a = n % 10;
		n = n / 10;
		if (a % 2 == 1) printf("%d", a);
	}
}