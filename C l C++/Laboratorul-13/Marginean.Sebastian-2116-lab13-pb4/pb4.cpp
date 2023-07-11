/*4. Scrieti un program C care citeste de la tastatura un caracter apoi scrie acest caracter intr-un
fisier text pe n linii, de cate n ori pe fiecare linie. N e citit de la tastatura.
Ex. fisier output
a
aa
aaa
aaaa*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

FILE* creeazaFisier(char[]);

int main() {
	FILE* fp;
	char fisier[50];
	char c[1];
	printf("\n Sa se scrie numele fisierului: ");
	scanf("%s", fisier);
	fp = creeazaFisier(fisier);
	if (fp = fopen(fisier, "r")) {
		printf("\n Caracterele din fisier sunt: ");
		fscanf(fp, "%s", c);
		while (!feof(fp)) {
			printf("%s ", c);
			fscanf(fp, "%s", c);
		}
	}
	else {
		printf("\n Eroare la deschiderea fisierului !");
		exit(1);
	}
	fclose(fp);
	remove(fisier);
}

FILE* creeazaFisier(char fisier[50]) {
	FILE* fp;
	int n;
	char c[1];
	if (fp = fopen(fisier, "w")) {
		printf("\n Sa se scrie numarul N de linii: ");
		scanf_s("%d", &n);
		printf("\n Sa se scrie caracterul dorit:  ");
		scanf("%s", c);
		printf("\n Caracterele scrise in ordinea dorita: ");
		for (int i = 0; i < n; i++) {
			fprintf(fp, "\n");
			for (int j = 0; j <= i; j++) {
				fprintf(fp, "%s", c);
			}
		}
	}
	else {
		printf("\n Eroare la deschiderea fisierului !");
		exit(1);
	}
	fclose(fp);
	return fp;
}