/*4. Sa se scrie un program care citeste dintr-un fisier text 10 numere intregi (generat in prealabil
intr-un editor de text). Sa se scrie functiile care:
a. aranjeaza crescator/descrescator sirul si afiseaza rezultatul;
b. numara cate elemente sunt pare si afiseaza rezultatul.
Adaugati in fisierul original noile rezultate obtinute.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

FILE* creeaza(char[]);
void aranjeazaCrescator(char[]);
int nrElemPare(char[]);

int main() {
	FILE* fp;
	char fisier[50] = "";
	printf("\n Sa se scrie numele la fisier: ");
	scanf("%s", fisier);
	int n, c;
	fp = creeaza(fisier);
	if (fp = fopen(fisier, "r")) {
		printf("\n Cele 10 numere intregi din fisier sunt:  ");
		for (int i = 0; i < 10; i++) {
			fscanf_s(fp, "%d", &n);
			printf("%d ", n);
		}
		aranjeazaCrescator(fisier);
		c = nrElemPare(fisier);
		printf("\n Sunt %d numere pare", c);
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
	fclose(fp);
	if (fp = fopen(fisier, "a"))
		fprintf(fp, "%d", nrElemPare(fisier));
}

FILE* creeaza(char fisier[50]) {
	FILE* fp;
	int x;
	if (fp = fopen(fisier, "w")) {
		printf("\n Sa se scrie cele 10 numere intregi: ");
		for (int i = 0; i < 10; i++) {
			scanf_s("%d", &x);
			fprintf(fp, "%d ", x);
		}
	}
	else {
		printf("\n Eroare la deschiderea fisierului !");
		exit(1);
	}
	fclose(fp);
	return fp;
}

void aranjeazaCrescator(char fisier[50]) {
	FILE* fp;
	int* a, aux, x;
	if (fp = fopen(fisier, "r")) {
		if (a = (int*)malloc(10 * sizeof(int))) {
			for (int i = 0; i < 10; i++) {
				fscanf(fp, "%d", &x);
				*(a + i) = x;
			}
			printf("\n Sirul ordonat crescator este: ");
			for (int i = 0; i < 9; i++)
				for (int j = i + 1; j < 10; j++) {
					if (*(a + i) > *(a + j)) {
						aux = *(a + i);
						*(a + i) = *(a + j);
						*(a + j) = aux;
					}
				}
			for (int i = 0; i < 10; i++) {
				printf("%d ", *(a + i));
			}
		}
		else
			printf("\n Alocarea nu s-a realizat !");
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
}

int nrElemPare(char fisier[50]) {
	FILE* fp;
	int* a, aux, x, c = 0;
	if (fp = fopen(fisier, "r")) {
		if (a = (int*)malloc(10 * sizeof(int))) {
			for (int i = 0; i < 10; i++) {
				fscanf(fp, "%d", &x);
				*(a + i) = x;
			}
			for (int i = 0; i < 10; i++) {
				if (*(a + i) % 2 == 0)
					c++;
			}
			return c;
		}
		else
			printf("\n Alocarea nu s-a realizat !");
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
}