/*4. Sa se scrie o aplicatie in care se genereaza aleator 20 de numere intregi cu valori mai mici
decat 50 (Folositi srand(), rand() si operatorul %). Sa se scrie o functie care elimina din tabloul
unidimensional creat numerele impare. Functia va utiliza pointeri. Afisati in main() tabloul initial si
cel obtinut dupa eliminarea elementelor impare.*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <stdlib.h>
#include <time.h>

void numereAleator(int x[100]);
void numereImpare(int* x, int* y);
int i, c;

int main() {
	int x[100], y[100], * s, * t;
	printf("Numerele generate sunt: ");
	numereAleator(x);
	s = &x[0];
	for (i = 0; i < 20; i++)
		printf("%d ", *s++);
	t = &y[0];
	numereImpare(x, y);
	printf("\nTablou unidimensional obtinut dupa elminarea elementelor impare este: ");
	for (i = 0; i < c; i++)
		printf(" %d ", *t++);
}

void numereAleator(int x[100]) {
	int a;
	srand(time(0));
	for (i = 0; i < 20; i++)
	{
		a = (rand() % 50) + 1;
		x[i] = a;
	}
}

void numereImpare(int* x, int* y) {
	c = 0;
	for (i = 0; i < 20; i++)

		if (x[i] % 2 == 0)
		{
			y[c] = x[i];
			c++;
		}
}