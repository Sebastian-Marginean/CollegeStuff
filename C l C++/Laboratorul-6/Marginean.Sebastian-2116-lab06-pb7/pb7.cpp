/*7. S� se scrie un program care determin� to�i divizorii unui num�r*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, n;
	printf("Scrieti un numar: ");
	scanf_s("%d", &n);
	printf("\nDivizorii numarului sunt:");
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf(" %i", i);
}