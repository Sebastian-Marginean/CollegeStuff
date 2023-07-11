/*1. Sa se scrie un program care citeste n numere reale, pe care le stocheaza intr-un tablou alocat
dinamic, afiseaza suma elementelor negative citite, iar la sfarsit elibereaza zona de memorie
alocata.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float sumaElementelorNegative(int n, float* tab);

int main() {
	int n;
	float* tab = NULL, suma;
	printf("\n Introduceti dimeniunea tabloului: ");
	scanf_s("%d", &n);
	if ((tab = (float*)malloc(n * sizeof(float)))) {
		for (int i = 0; i < n; i++) {
			printf("\n Elementul %d : ", i + 1);
			scanf_s("%f", tab + i);
		}
		suma = sumaElementelorNegative(n, tab);
		printf("Suma elementelor negative este: %f", suma);
	}
	else
		printf("\nAlocare nereusita !");
	if (tab)
		free(tab);
}

float sumaElementelorNegative(int n, float* tab) {
	float suma = 0;
	for (int i = 0; i < n; i++) {
		if (*(tab + i) < 0) {
			suma = suma + *(tab + i);
		}
	}
	return suma;
}