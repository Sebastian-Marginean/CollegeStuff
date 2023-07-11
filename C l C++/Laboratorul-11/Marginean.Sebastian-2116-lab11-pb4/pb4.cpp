/*4. Sa se scrie o aplicatie C care aloca dinamic memorie pentru "n" siruri de caractere, care se
vor citi de la tastatura.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sir(char*, int);
void eliberare(char*);

int main() {
	int n;
	char* s = NULL;
	printf("\n Sa se scrie numarul de siruri de caractere: ");
	scanf_s("%d", &n);
	sir(s, n);
	eliberare(s);
}

void sir(char* s, int n) {
	for (int i = 0; i < n; i++) {
		if ((s = (char*)malloc(n * sizeof(char)))) {
			printf("\n Sirul %d este: ", i + 1);
			scanf("%s", s + i);
		}
		else
			printf("Alocarea nu a reusit");
	}
}

void eliberare(char* s) {
	if (s)
		free(s);
}