/*6. Sa se scrie o aplicatie C/C++ care citeste de la tastatura un sir de caractere. Sa se scrie o
functie care afiseaza caracterele ce compun sirul si numarul de aparitii ale fiecaruia, folosind
pointeri.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define DIM 255

void afisareCaractere(char s[DIM], char* p);

int main() {
	char s[DIM];
	char* p;
	printf("Sa se scrie un sir de caractere: ");
	gets_s(s, DIM);
	p = &s[0];
	afisareCaractere(s, p);
}

void afisareCaractere(char s[DIM], char* p) {
	char b;
	int a;
	int l = strlen(s);
	for (int i = 0; i < l; i++) {
		b = s[i];
		printf("\nCaracterul %c", b);
		*p = s[0];
		a = 0;
		for (int j = 0; j < l; j++) {
			if (*(p + i) == *(p + j))
				a++;
		}
		printf(" a aparut de %d ori", a);
	}
}