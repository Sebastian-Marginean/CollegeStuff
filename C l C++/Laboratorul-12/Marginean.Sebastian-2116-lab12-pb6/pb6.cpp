/*6. Sa se scrie un program care afiseaza numele, prenumele si media studentului cu cele mai
bune rezultate din grupa in urma sesiunii de iarna. Folositi pentru aceasta un tablou de structuri,
de un tip numit student, alocarea dinamica, si o functie de care returneaza inregistrarea student
cu media cea mai mare*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
	char nume[20];
	char prenume[20];
	float media;
};

void CitDateStudent(struct student*);
void AfisDateStudent(struct student*);

int main() {
	student* p, maxi;
	maxi.media = 0;
	int n, i;
	printf("Sa se introduca numarul de studenti: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("Nu sunt destui studenti !");
		return 0;
	}
	if (p = (struct student*)malloc(n * sizeof(struct student))) {
		printf("\n Sa se introduca datele studentilor: ");
		for (i = 0; i < n; i++) {
			printf("Studentul %d", i + 1);
			CitDateStudent(p + i);
		}
		for (i = 0; i < n; i++) {
			if ((p + i)->media > maxi.media)
				maxi.media = (p + i)->media;
		}
		printf("\n Studentul/studentii cu cea mai mare media sunt: ");
		for (i = 0; i < n; i++) {
			if (maxi.media == (p + i)->media)
				AfisDateStudent(p + i);
		}
	}
	else
		printf("Alocarea nu a avut succes !");
	if (p)
		free(p);
}

void CitDateStudent(struct student* p) {
	printf("\n Sa se scrie numele studentului: ");
	scanf("%s", p->nume);
	printf("\n Sa se scrie prenumele studentului: ");
	scanf("%s", p->prenume);
	printf("\n Sa se scrie media studentului: ");
	scanf_s("%f", &p->media);
}
void AfisDateStudent(struct student* p) {
	printf("\n Numele studentului este: %s", p->nume);
	printf("\n Prenumele studentului este: %s", p->prenume);
	printf("\n Media studentului este : %.2f", p->media);
}