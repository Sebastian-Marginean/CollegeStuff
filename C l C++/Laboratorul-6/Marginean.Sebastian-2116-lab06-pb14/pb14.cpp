/*14. Scrie�i un program care cite�te n numere �ntregi de la tastatur� �i le afi�eaz� pe cele divizibile cu 3.*/

#define _CRT_SECURE_NO_WARNIMNGS
#include <stdio.h>

int main() {
	int n, x;
	printf("Citeste un numar intreg n: ");
	scanf_s("%d", &n);
	printf("Citi cele n numere: ");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		if (x % 3 == 0)
			printf(" %d", x);
	}
}