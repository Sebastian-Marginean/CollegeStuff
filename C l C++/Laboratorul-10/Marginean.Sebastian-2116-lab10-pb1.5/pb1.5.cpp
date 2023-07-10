/*1. Rezolva�i problemele din laboratorul de aplica�ii cu tablouri (laboratorul 8, problemele 1-12)
folosind pointeri.*/
/*5. Scrie�i o aplicatie care cite�te de la tastatura dou� siruri de caractere reprezentand numele si
prenumele unei persoane. Afisati-le cu majuscul�, separate prin dou� spatii de tabulare.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void conv();

int main() {
	conv();
}

void conv() {
	char n[20], s[20], * p1, * p2;
	printf("Sa se scrie numele persoanei: ");
	gets_s(n);
	p1 = &n[0];
	printf("Sa se scrie prenumele persoanei: ");
	gets_s(s);
	p2 = &s[0];
	*p1 -= 32;
	*p2 -= 32;
	printf("\nNumele si prenumele acelei persoane este: %s %s", p1, p2);
}