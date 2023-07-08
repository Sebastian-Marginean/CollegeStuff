/*2. Să se scrie un program pentru pentru determinarea mediei geometrice a două numere întregi*/

#include <stdio.h>
#include <math.h>
int mediageometrica(int a, int b) {
	int mediageometrica;
	mediageometrica = sqrt(a * b);
	return mediageometrica;
}
int main() {
	int a, b;
	scanf_s("%i %i", &a, &b);
	int mg;
	mg = mediageometrica(a, b);
	printf("Media geometrica a celor doua numere intregi este: %i", mg);
}