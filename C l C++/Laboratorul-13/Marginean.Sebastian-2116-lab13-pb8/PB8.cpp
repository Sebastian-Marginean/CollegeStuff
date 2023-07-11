/*10. Scrieti un program care citeste valori reale dintr-un fisier creat in prealabil si scrie intr-un alt
fisier partea intreaga a numerelor pozitive citite.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp;
	float n;
	int n2;
	char fisier[50] = "afisareFisier.txt";
	if (fp = fopen("scriereFisier.txt", "r")) {
		while (!feof(fp)) {
			fscanf_s(fp, "%f", &n);
			if (fp = fopen(fisier, "w")) {
				n2 = int(n);
				fprintf(fp, "%d", n2);
				printf("\n Numarul pozitiv care a fost scris este: %d", n2);
			}
			else {
				printf("\n Eroare la scrierea in fisier !");
				exit(1);
			}
		}
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
	fclose(fp);
	exit(1);
}