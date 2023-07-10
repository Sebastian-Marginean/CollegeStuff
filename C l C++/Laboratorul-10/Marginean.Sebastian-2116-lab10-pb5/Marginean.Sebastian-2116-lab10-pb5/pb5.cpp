/*5. Definiti un tablou de pointeri catre siruri de caractere. Fiecare locatie a tabloului contine
adrese catre unul din urmatoarele siruri de caractere:
- "valoare prea mica"
- "valoare prea mare"
- "valoare corecta"
Aplicatia genereaza un numar aleator intre 1 si 100 si apoi citeste in mod repetat intrarea de la
tastatura pana cand utilizatorul introduce valoarea corecta. Folositi mesajele definite pentru a
informa utilizatorul, la fiecare pas, despre relatia existenta intre numarul generat si ultima valoare
citita*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int a, b;
	char const* c[] = { "Valorea prea mica" };
	char const* d[] = { "Valoarea prea mare" };
	char const* e[] = { "Valoarea corecta" };
	b = (int)rand() % 100 + 1;
	do {
		printf("\nSa se introduca un numar de la 1 la 100: ");
		scanf_s("%d", &a);
		if (a != b) {
			if (a < b)
				printf("%s\n", *c);
			if (a > b)
				printf("%s\n", *d);
		}
		else
			printf("%s\n", *e);
	} while (a != b);
}