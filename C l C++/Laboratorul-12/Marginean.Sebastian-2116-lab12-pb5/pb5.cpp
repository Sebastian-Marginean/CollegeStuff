/*5. Sa se scrie un program care citeste datele personale pentru n persoane (nume, prenume,
data nasterii, codul numeric personal, data angajarii) si apoi le afiseaza in ordinea datei angajarii.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct data_calend
{
	int ziua;
	int luna;
	int anul;
};

struct persoana {
	char nume[20];
	char prenume[20];
	data_calend data_nasterii;
	long CNP;
	data_calend data_angajarii;
};

void CitDatePers(struct persoana*);
void AfisDatePers(struct persoana*);

int main() {
	struct persoana* p, aux;
	int i, j, n;
	printf("\n Sa se scrie numarul de persoane angajate: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("\n Nu sunt destule persoane angajate !");
	}
	if (p = (struct persoana*)malloc(n * sizeof(struct persoana))) {
		printf("\n Sa se scrie datele persoanelor angajate: ");
		for (i = 0; i < n; i++) {
			printf("\n Persoana: %d", i + 1);
			CitDatePers(p + i);
		}
		for (i = 0; i < n; i++)
			for (j = i; j < n; j++)
			{
				if (((p + i)->data_angajarii).anul > ((p + j)->data_angajarii).anul)
				{
					aux = p[i];
					p[i] = p[j];
					p[j] = aux;
				}
				if ((((p + i)->data_angajarii).anul == ((p + j)->data_angajarii).anul) && (((p + i)->data_angajarii).luna > ((p + j)->data_angajarii).luna))
				{
					aux = p[i];
					p[i] = p[j];
					p[j] = aux;
				}
				if ((((p + i)->data_angajarii).anul == ((p + j)->data_angajarii).anul) && (((p + i)->data_angajarii).luna == ((p + j)->data_angajarii).luna) && (((p + i)->data_angajarii).ziua > ((p + j)->data_angajarii).ziua))
				{
					aux = p[i];
					p[i] = p[j];
					p[j] = aux;
				}
			}
		printf("\n Angajatii sortati dupa data agajarii lor sunt: ");
		for (i = 0; i < n; i++) {
			AfisDatePers(p + i);
		}
	}
	else
		printf("Alocarea nu a reusit !");
	if (p)
		free(p);
}

void CitDatePers(struct persoana* p) {
	printf("\n Sa se scrie numele persoanei angajate: ");
	scanf("%s", p->nume);
	printf("\n Sa se scrie prenumele persoanei angajate: ");
	scanf("%s", p->prenume);
	printf("\n Sa se scrie ziua in care s-a nascut peroana angajata: ");
	scanf_s("%d", &(p->data_nasterii).ziua);
	printf("\n Sa se scrie luna in care s-a nascut peroana angajata: ");
	scanf_s("%d", &(p->data_nasterii).luna);
	printf("\n Sa se scrie anul in care s-a nascut peroana angajata: ");
	scanf_s("%d", &(p->data_nasterii).anul);
	printf("\n Sa se scrie CNP-ul persoanei angajate: ");
	scanf_s("%ld", &p->CNP);
	printf("\n Sa se scrie ziua in care s-a angajat peroana: ");
	scanf_s("%d", &(p->data_angajarii).ziua);
	printf("\n Sa se scrie luna in care s-a angajat peroana: ");
	scanf_s("%d", &(p->data_angajarii).luna);
	printf("\n Sa se scrie anul in care s-a angajat peroana: ");
	scanf_s("%d", &(p->data_angajarii).anul);
}
void AfisDatePers(struct persoana* p) {
	printf("\n Numele persoanei angajate: %s", p->nume);
	printf("\n Preumele persoanei angajate: %s", p->prenume);
	printf("\n Ziua in care s-a nascut persoana angajata: %d", (p->data_nasterii).ziua);
	printf("\n Luna in care s-a nascut persoana angajata: %d", (p->data_nasterii).luna);
	printf("\n Anul in care s-a nascut persoana angajata: %d", (p->data_nasterii).anul);
	printf("\n CNP-ul persoanei angajate: %ld", p->CNP);
	printf("\n Ziua in care s-a angajat persoana: %d", (p->data_angajarii).ziua);
	printf("\n Luna in care s-a angajat persoana: %d", (p->data_angajarii).luna);
	printf("\n Anul in care s-a angajat persoana: %d", (p->data_angajarii).anul);
}