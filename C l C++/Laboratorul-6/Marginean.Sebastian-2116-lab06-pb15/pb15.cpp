/*15. S� se scrie un program care cite�te de la tastatur� un caracter,
pe care �l afi�eaz� pe n r�nduri, c�te n caractere pe un r�nd.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	char c;
	printf("Citeste un carcater: ");
	scanf_s("%c", &c);
	printf("Citeste un numar: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%c", c);
		printf("\n");
	}
}