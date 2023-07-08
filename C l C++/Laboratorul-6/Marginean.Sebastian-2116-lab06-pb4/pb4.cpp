/*4. Să se scrie un program care citeşte de la tastatură o valoare întreagă şi calculează n! (n-factorial).*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf_s("%i", &n);
	long double f = 1.0;
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			f *= i;
		}
		printf("Factorialul numarului este: %f", f);
	}
	else
		printf("Un numar negativ nu are factorial");
}