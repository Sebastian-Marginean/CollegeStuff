/*9. Calcula�i produsul a dou� numere �ntregi folosind num�rul corespunz�tor de adun�ri.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, i, p = 0;
	printf("Scrie doua numere intregi: ");
	scanf_s("%d %d", &a, &b);
	for (i = 0; i < b; i++)
		p += a;
	printf("Produsul a doua numere intregi folosind numarul corespunzator de adunari este: %i", p);
}