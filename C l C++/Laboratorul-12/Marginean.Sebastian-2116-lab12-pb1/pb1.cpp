/*1. Sa se scrie un program C, care folosind o structura numita student, avand campurile {nume,
prenume, tara de origine, grupa, anul nasterii}, sa determine numarul de studenti straini din
grupa (grupa de MAX studenti) si sa afiseze toate datele acestora. Datele pentru studentii din
grupa se citesc de la intrarea standard, pana la int�lnirea numelui AAA.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 30

void AfisDateStud(struct student);

struct student {
	char nume[20];
	char prenume[20];
	char tara_de_origine[35];
	int grupa;
};

int main() {
	struct student dp[n];
	int nrstudstr = 0, i = 0;
	do {
		printf("\n Studentul: %d", i + 1);
		printf("\n Numele studentului: ");
		scanf("%s", dp[i].nume);
		if (strcmp(dp[i].nume, "AAA") == 0)
			break;
		printf("\n Prenumele studentului: ");
		scanf("%s", dp[i].prenume);
		printf("\n Tara de origine a studentului: ");
		scanf("%s", dp[i].tara_de_origine);
		printf("\n Grupa studentului: ");
		scanf_s("%d", &dp[i].grupa);
		printf("\n Anul in care s-a nascut studentul: ");
		scanf_s("%d", &dp[i].anul_nasterii);
		i++;
	} while (strcmp(dp[i].nume, "AAA") != 0);
	for (int j = 0; j < i; j++) {
		if (strcmp((dp[j]).tara_de_origine, "Romania") != 0) {
			AfisDateStud(dp[j]);
			nrstudstr++;
		}
	}
	printf("\n Numarul de studenti straini este: %d", nrstudstr);
}

void AfisDateStud(struct student p)
{
	printf("\n Numele: %s", p.nume);
	printf("\n Prenumele: %s", p.prenume);
	printf("\n Tara de origine a studentului: %s", p.tara_de_origine);
	printf("\n Grupa studentului: %d", p.grupa);
	printf("\n Anul in care s-a nascut studentul: %d", p.anul_nasterii);
}