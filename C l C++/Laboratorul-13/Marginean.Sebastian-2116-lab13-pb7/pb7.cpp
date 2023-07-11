/*. Scrieti o aplicatie C care citeste caracter cu caracter un fisier text si converteste primul caracter al fiecarui cuvant �n majuscula.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE* fp;
	int n;
	printf("\n Sa se scrie numarul de cuvinte care apar in fisier: ");
	scanf_s("%d", &n);
	char s[] = "";
	if (fp = fopen("testfile9.txt", "r")) {
		while (!feof(fp)) {
			fscanf(fp, "%s", s);
			s[0] -= 32;
			for (int i = 0; i < n; i++) {
				if (s[i - 1] == ' ')
					s[i] -= 32;
			}
			printf("\n %s", s);
			fprintf(fp, "\n %s", s);
		}
	}
	else {
		printf("\n Eroare la citirea fiserului !");
		exit(1);
	}
	fclose(fp);
	exit(1);
}