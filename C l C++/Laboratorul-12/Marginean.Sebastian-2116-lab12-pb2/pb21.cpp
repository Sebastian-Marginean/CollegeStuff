/*2. Sa se scrie un program C, in care folosind cate o func�ie se transfera ca parametru o variabila
de tip structura de date, ca valoare si, respectiv, prin adresa folosind pointeri. In functia main()
inirializati campurile structurii cu date citite de la tastatura. In ambele functii afisati datele din
structura folosind un mesaj adecvat.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct sportiv {
	int numar;
	char nume[20];
	char prenume[20];
	int inaltime;
};

void CitDateSportiv(struct sportiv*);
void AfisDateSportiv(struct sportiv*);

int main() {
	struct sportiv* p;
	int i, n;
	printf("\n Sa se scrie numarul de sportivi care participa la turneu: ");
	scanf_s("%d", &n);
	if (n < 2) {
		printf("\n Competitia nu se poate desfasura daca nu are cel putin 2 sportivi !");
	}
	if (p = (struct sportiv*)malloc(n * sizeof(struct sportiv*))) {
		printf("\n Introduceti datele sportivilor: ");
		for (i = 0; i < n; i++) {
			printf("\n Sportivul %d: ", i + 1);
			CitDateSportiv(p + i);
			AfisDateSportiv(p + i);
		}
	}
	else
		printf("Alocarea nu a reusit !");
	if (p)
		free(p);
}

void CitDateSportiv(struct sportiv* p) {
	printf("\n Sa se scrie numarul pe care il va avea sportivul: ");
	scanf_s("%d", &p->numar);
	printf("\n Sa se scrie numele sportivului: ");
	scanf("%s", p->nume);
	printf("\n Sa se scrie prenumele sportivului: ");
	scanf("%s", p->prenume);
	printf("\n Sa se scrie inaltimea pe care o are sportivul(centimetri): ");
	scanf_s("%d", &p->inaltime);
}

void AfisDateSportiv(struct sportiv* p) {
	printf("\n Numarul sportivului este: %d", p->numar);
	printf("\n Numele sportivului este: %s", p->nume);
	printf("\n Preumele sportivului este: %s", p->prenume);
	printf("\n Inaltimea sportivului este: %d", p->inaltime);
}