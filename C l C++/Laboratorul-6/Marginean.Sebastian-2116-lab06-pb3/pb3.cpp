/*3. Să se scrie un program care calculeaza a la puterea n, unde a și n sunt citite de la consolă.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, p, nf = 1;
	printf("Citeste un numar: ");
	scanf_s("%i", &n);
	printf("Puterea la care doriti sa fie ridicat numarul: ");
	scanf_s("%i", &p);
	int i = 0;
	while (i != p) {
		nf = nf * n;
		i++;
	}
	printf("Numarul citit ridicat la puterea dorita este: %i", nf);
}