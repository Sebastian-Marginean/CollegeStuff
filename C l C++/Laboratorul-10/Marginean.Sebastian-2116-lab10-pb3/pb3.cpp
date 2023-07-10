/*3. Scrieti o aplicatie care citeste de la tastatura un sir de caractere cu lungimea mai mare decat
7. Folositi un pointer pt. a accesa si afisa caracterele de pe pozitiile 1, 3, 5 �i 7.*/


#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#define DIM 255

void sir(char s[DIM], char* p);
int main() {
	char* p;
	char s[DIM];
	printf("Sa se citeasca de la tastatura un sir de caractere: ");
	gets_s(s);
	p = &s[0];
	sir(s, p);
}

void sir(char s[DIM], char* p) {
	int n, a = 1;
	if (strlen(s) <= 7)
		printf("\nSirul scris de dumeneavoastra nu are lungimea mai mare decat 7.");
	else {
		printf("\nCaracterul de pe pozitia 1 este: %c", *p);
		p = &s[2];
		printf("\nCaracterul de pe pozitia 3 este: %c", *p);
		p = &s[4];
		printf("\nCaracterul de pe pozitia 5 este: %c", *p);
		p = &s[6];
		printf("\nCaracterul de pe pozitia 7 este: %c", *p);
	}
}