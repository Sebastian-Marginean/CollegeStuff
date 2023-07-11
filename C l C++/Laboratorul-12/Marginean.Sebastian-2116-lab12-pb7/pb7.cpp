/*7. Sa se scrie o aplicatie C, care aloca dinamic memorie pentru datele a N studenti, (nume,
prenume si gen), citeste datele pentru fiecare din acestia, afiseaza numarul studentelor si
elibereaza memoria alocata.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char nume[20];
	char prenume[20];
	char gen[10];
};

void CitDateStudent(struct student*);
void AfisDateStudent(struct student*);

int main() {
	student* p;
	int i, n, k = 0;
	printf("\n Sa se scrie numarul de studenti: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("\n Nu sunt destui studenti !");
		return 0;
	}
	if (p = (struct student*)malloc(n * sizeof(struct student))) {
		printf("\n Sa se scrie datele studentilor: ");
		for (i = 0; i < n; i++) {
			printf("\n Studentul: %d ", i + 1);
			CitDateStudent(p + i);
		}
		for (i = 0; i < n; i++) {
			if (strcmp((p + i)->gen, "feminin") == 0)
				k++;
		}
		printf("Sunt %d studente.", k);
	}
	else
		printf("\n Alocarea nu a reusit !");
	if (p)
		free(p);
}

void CitDateStudent(struct student* p) {
	printf("\n Sa se scrie numele studentului: ");
	scanf("%s", p->nume);
	printf("\n Sa se scrie prenumele studentului: ");
	scanf("%s", p->prenume);
	printf("\n Sa se scrie genul studentului: ");
	scanf("%s", p->gen);
}
void AfisDateStudent(struct student* p) {
	printf("\n Numele studentului este: %s", p->nume);
	printf("\n Preumele studentului este: %s", p->prenume);
	printf("\n Genul studentului este: %s", p->gen);
}