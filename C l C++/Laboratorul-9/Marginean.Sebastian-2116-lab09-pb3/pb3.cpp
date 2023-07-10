/*3. Sa se scrie un program care citeste elementele a doua tablouri unidimensionale de numere
intregi si afiseaza produsul scalar al acestora. Se va folosi o functie care preia elementele de la
tastatura si o alta functie, care calculeaza produsul scalar. Ambele vor utiliza pointeri. Citirea
numarului de elemente ale tabloului si afisarea rezultatului se va face in functia main().*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int* t, int n);
int produsulScalar(int* a, int* b, int n);

int main() {
	int x[100], y[100], n;
	printf("Numarul de elemente al vectorilor: ");
	scanf_s("%d", &n);
	if (n > 100 || n <= 0)
		printf("Numarul nu e bun!");
	printf("\nElementele din primul vector sunt: ");
	citire(x, n);
	printf("\nElementele din al doilea vector sunt: ");
	citire(y, n);
	printf("\nProdusul scalar al elementelor este: %d ", produsulScalar(x, y, n));

}

void citire(int* t, int n) {
	for (int i = 0; i <= n - 1; i++)
	{
		printf("\n\tElementul %d este: ", i + 1);
		scanf_s("%d", (t + i));
	}
}

int produsulScalar(int* a, int* b, int n) {
	int c = 0;
	for (int i = 0; i <= n - 1; i++)
		c = c + *(a + i) * *(b + i);
	return c;
}