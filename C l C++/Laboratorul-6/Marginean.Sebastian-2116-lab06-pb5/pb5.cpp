/*5. S� se scrie un program care :
- determin� cel mai mare num�r prim mai mic dec�t num�rul dat
- determin� toate numerele prime mai mici dec�t num�rul dat.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int i, n, p = 0, d = 2, maxi;
	printf("Scrieti un numar: ");
	scanf_s("%d", &n);
	maxi = d;
	if (n == 2) {
		printf("\nNu sunt numere prime mai mici decat numarul dat");
	}
	else {
		printf("\nNumerele prime mai mici decat numarul dat sunt: ");
		for (d = 2; d < n; d++)
		{
			p = 0;
			for (int i = 2; i <= d / 2; i++)
				if (d % i == 0)
					p++;
			if (p == 0) {
				printf("%d ", d);
				if (d > maxi)
					maxi = d;
			}
		}
		printf("\nCel mai mare numar prim mai mic decat numarul dat: %d", maxi);
	}
}