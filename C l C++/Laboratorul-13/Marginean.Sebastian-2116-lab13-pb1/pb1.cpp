/*1. Sa se scrie un program care citeste si apoi afiseaza date intregi preluate dintr-un fisier text al
carui nume este citit de la consola. Creati in prealabil fisierul folosind un editor de text.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

FILE* creeaza(char[]);

int main() {
	FILE* fp;
	int x;
	char fisier[50] = "";
	printf("\n Sa se scrie numele la fisier: ");
	scanf("%s", fisier);
	fp = creeaza(fisier);
	if (!(fp = fopen(fisier, "r"))) {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
	else {
		printf("\n Numerele din fisier sunt: ");
		fscanf(fp, "%d", &x);
		while (!feof(fp)) {
			printf("%d ", x);
			fscanf(fp, "%d", &x);
		}
	}
	fclose(fp);
	remove(fisier);
}

FILE* creeaza(char fisier[50]) {
	FILE* fp;
	int n, x;
	if (!(fp = fopen(fisier, "w"))) {
		printf("\n Eroare la deschiderea fisierului !");
		exit(1);
	}
	else {
		printf("\n Sa se scrie un numar intreg: ");
		scanf_s("%d", &n);
		printf("\n Sa se scrie %d numere intregi: ", n);
		for (int i = 0; i < n; i++) {
			scanf_s("%d", &x);
			fprintf(fp, "%d ", x);
		}
	}
	fclose(fp);
	return fp;
}