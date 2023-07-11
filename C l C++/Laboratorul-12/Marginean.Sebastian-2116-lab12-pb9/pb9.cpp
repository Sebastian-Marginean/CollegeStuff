/*9. Scrieti o aplicatie C, care aloca dinamic memorie pentru memorarea datelor a N produse,
folosind o structura Produs, cu campurile denumire, pret, cantitate, citeste datele pentru fiecare
dintre produse si afiseaza produsul din care avem cel mai mult pe stoc. In final va elibera memoria alocata.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct produs {
	char denumire[30];
	float pret;
	int cantitate;
};

void CitDateProduse(struct produs*);
void AfisDateProduse(struct produs*);

int main() {
	produs* p;
	produs maxi;
	maxi.cantitate = 0;
	int i, n;
	printf("\n Sa se scrie cate produse sunt in total: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("\n Nu sunt destule produse in stoc !");
		return 0;
	}
	if (p = (struct produs*)malloc(n * sizeof(struct produs))) {
		printf("\n Sa se scrie informatii despre produse: ");
		for (i = 0; i < n; i++) {
			printf("\n Produsul: %d", i + 1);
			CitDateProduse(p + i);
		}
		for (i = 0; i < n; i++) {
			if ((p + i)->cantitate > maxi.cantitate)
				maxi.cantitate = (p + i)->cantitate;
		}
		printf("\n Produsul care are cel mai mult stoc este: ");
		for (i = 0; i < n; i++) {
			if (maxi.cantitate == (p + i)->cantitate)
				AfisDateProduse(p + i);
		}
	}
	else
		printf("\n Alocarea nu a reusit !");
	if (p)
		free(p);
}

void CitDateProduse(struct produs* p) {
	printf("\n Sa se scrie denumirea produsului: ");
	scanf("%s", p->denumire);
	printf("\n Sa se scrie pretul produsului: ");
	scanf_s("%f", &p->pret);
	printf("\n Sa se scrie cate produse sunt in stoc: ");
	scanf_s("%d", &p->cantitate);
}
void AfisDateProduse(struct produs* p) {
	printf("\n Denumirea produsului: %s", p->denumire);
	printf("\n Pretul produsului: %.2f", p->pret);
	printf("\n Cate produse sunt in stoc: %d", p->cantitate);
}