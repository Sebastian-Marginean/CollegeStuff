/*4. Sa se scrie o aplicatie C, care utilizand o structura de tip angajat sa afiseze toate datele persoanelor cu ocupatia inginer, dintr-o
intreprindere (nume, prenume, ocupatia, data nasterii, sectia in care lucreaza).*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data_calend {
	int ziua;
	char luna[11];
	int anul;
};

struct angajat {
	char nume[20];
	char prenume[20];
	char ocupatia[20];
	struct data_calend data_nasterii;
	char sectia[40];
};

void CitDateAngajat(struct angajat*);
void AfisDateAngajat(struct angajat*);

int main() {
	struct angajat* p;
	int i, n, k = 0;
	if (p = (angajat*)malloc(sizeof(angajat))) {
		printf("\n Sa se scrie numarul de angajati: ");
		scanf_s("%d", &n);
		for (i = 0; i < n; i++) {
			if (n <= 0)
				printf("\n Intreprinderea nu are destui angajati !");
		}
		for (i = 0; i < n; i++) {
			printf("\n Sa se scrie informatii despre angajatul cu numarul %d", i + 1);
			CitDateAngajat(p + i);
		}
		for (i = 0; i < n; i++) {
			if (strcmp((p + i)->ocupatia, "inginer") == 0) {
				AfisDateAngajat(p + i);
				k++;
			}
		}
		if (k == 0)
			printf("\n Intreprinderea nu are nici un inginer !");
	}
	else
		printf("Alocarea nu a reusit !");
	if (p)
		free(p);
}
void CitDateAngajat(struct angajat* p) {
	printf("\n Sa se scrie numle angajatului: ");
	scanf("%s", p->nume);
	printf("\n Sa se scrie prenumle angajatului: ");
	scanf("%s", p->prenume);
	printf("\n Sa se scrie ocupatia angajatului: ");
	scanf("%s", p->ocupatia);
	printf("\nZiua: ");
	scanf_s("%d", &(p->data_nasterii).ziua);
	printf("\nLuna: ");
	scanf("%s", (p->data_nasterii).luna);
	printf("\nAnul: ");
	scanf_s("%d", &(p->data_nasterii).anul);
}
void AfisDateAngajat(struct angajat* p) {
	printf("\n Numele angajatului: %s", p->nume);
	printf("\n Preumele angajatului: %s", p->prenume);
	printf("\n Ocupatia angajatului: %s", p->ocupatia);
	printf("\n Ziua in care s-a nascut angajatul: %d", (p->data_nasterii).ziua);
	printf("\n Luna in care s-a nascut angajatul: %s", (p->data_nasterii).luna);
	printf("\n Anul in care s-a nascut angajatul: %d", (p->data_nasterii).anul);
}