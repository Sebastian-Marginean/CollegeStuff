/*3. Scrieti un program care citeste de la consola N numere intregi pe care le scrie intr-un fisier
text cu numele citit de la tastatura. Cititi apoi numerele din fisier, determinati media lor aritmetica,
pe care o adauga�i la sfar�itul fisierului si o afisati �i pe ecran.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

FILE* creeazaFisier(char[]);
float mediaAritmetica(char[], int);

int main() {
	FILE* fp;
	int x, n = 1;
	float mediaAritmetic;
	char fisier[25] = "";
	printf("\n Sa se dea un nume fisierului: ");
	scanf("%s", fisier);
	fp = creeazaFisier(fisier);
	if ((fp = fopen(fisier, "r")) != NULL) {
		printf("\n Numerele din fisier sunt: ");
		fscanf_s(fp, "%d", &x);
		while (!feof(fp)) {
			printf("%d ", x);
			fscanf_s(fp, "%d", &x);
			n++;
		}
		mediaAritmetic = mediaAritmetica(fisier, n);
		fprintf(fp, "\n Media aritmetica a numerelor din fisier este: %f", mediaAritmetic);
		printf("\n Media aritmetica a numerelor din fisier este: %f", mediaAritmetic);
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}

	fclose(fp);
	remove(fisier);
}

FILE* creeazaFisier(char fisier[25]) {
	FILE* fp;
	int n, x;
	if (fp = fopen(fisier, "w")) {
		printf("\n Sa se scrie cate numere intregi N vor aparea in fisier: ");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++) {
			printf("Sa se scrie numarul %d : ", i + 1);
			scanf_s("%d", &x);
			fprintf(fp, "%d ", x);
		}
	}
	else {
		printf("\n Eroare la scrierea fisierului !");
		exit(1);
	}
	fclose(fp);
	return fp;
}
float mediaAritmetica(char fisier[25], int n) {
	FILE* fp;
	float* a;
	float x;
	float media, suma = 0, c = 0;
	if (fp = fopen(fisier, "r")) {
		if (a = (float*)malloc(n * sizeof(float))) {
			for (int i = 0; i < n; i++) {
				fscanf_s(fp, "%f", &x);
				*(a + i) = x;
			}
			for (int i = 0; i < n; i++) {
				suma = suma + *(a + i);
				c++;
			}
			media = suma / c;
		}
		else {
			printf("Eroare la alocarea memoriei !");
			exit(1);
		}
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
	return media;
}