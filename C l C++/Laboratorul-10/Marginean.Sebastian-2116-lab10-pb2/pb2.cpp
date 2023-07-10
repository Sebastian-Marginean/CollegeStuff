/*2. Sa se citeasc� doi parametri intregi si alti doi flotanti din linia de comanda. Sa se afiseze suma
si produsul lor.*/

#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int suma = 0;
	int a, b;
	float c, d;
	float produsul = 1;
	if (argc == 1) {
		printf("\nNu ati introdus numerele necesare.");
		return 0;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atof(argv[3]);
	d = atof(argv[4]);
	suma = a + b + c + d;
	produsul = a * b * c * d;
	printf("\nSuma parametrilor din linia de comanda este : %d\n", suma);
	printf("\nProdusul parametrilor din linia de comanda este : %f\n", produsul);
}