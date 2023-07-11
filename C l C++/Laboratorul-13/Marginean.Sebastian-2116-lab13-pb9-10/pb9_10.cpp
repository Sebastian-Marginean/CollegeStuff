/*9-10. Sa se scrie o aplicatie care:
-defineste o structura numita student, cu campurile numele, prenumele, grupa, media;
-citeste de la consola un numar intreg n (numarul studentilor)
-pentru fiecare inregistrare de tip student, citeste cu o functie datele aferente si
 le scrie intr-un fisier, cu numele preluat de la consola;
-citeste continutul fisierului si afiseaza studentii ce au media mai mare decat o valoare citita de la
consola.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
	char nume[25];
	char prenume[25];
	int grupa;
	float media;
};

void CitDateStud(struct student*, FILE* fp);
void AfisDateStud(struct student*);

int main() {
	struct student* p;
	FILE* fp;
	int n;
	float val;
	char fisier[25];
	printf("\n Sa se scrie numele fisierului: ");
	scanf("%s", fisier);
	printf("\n Sa se scrie numarul studentilor: ");
	scanf_s("%d", &n);
	printf("\n Sa se scrie o valoare pentru medie: ");
	scanf_s("%f", &val);
	if (n <= 0) {
		printf("\n Nu sunt destui studenti !");
		exit(1);
	}
	if (p = (struct student*)malloc(n * sizeof(struct student))) {
		for (int i = 0; i < n; i++) {
			printf("\n Sa se scrie datele pentru sudentul %d", i + 1);
			if (fp = fopen(fisier, "w")) {
				CitDateStud(p + i, fp);
			}
		}
		if (fp = fopen(fisier, "r")) {
			for (int i = 0; i < n; i++) {
				if ((p + i)->media > val) {
					printf("\n Studentul %d care are media peste valoarea data este: ", i + 1);
					AfisDateStud(p + i);
				}
			}
		}
	}
	fclose(fp);
}

void CitDateStud(struct student* p, FILE* fp) {
	printf("\n Sa se scrie numele studentului: ");
	scanf("%s", p->nume);
	printf("\n Sa se scrie prenumele studentului: ");
	scanf("%s", p->prenume);
	printf("\n Sa se scrie grupa studentului: ");
	scanf_s("%d", &p->grupa);
	printf("\n Sa se scrie media studentului: ");
	scanf_s("%f", &p->media);
	fwrite(p, sizeof(struct student*), 1, fp);
}

void AfisDateStud(struct student* p) {
	printf("\n Numele studentului este: %s", p->nume);
	printf("\n Prenumele studentului este: %s", p->prenume);
	printf("\n Grupa studentului este: %d", p->grupa);
	printf("\n Media studentului este: %f", p->media);
}