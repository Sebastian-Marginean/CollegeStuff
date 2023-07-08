/*9. Citiți de la tastatura 2 numere întregi. Determinați aria cercului cu raza
egală cu prima valoare citită și calculați aria dreptunghiului cu laturile
egale cu valorile date. Afișați aria calculată specificând forma geometrică
pentru care s-a făcut calculul.*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float ariacercului, ariadreptunghiului;
	float pi = 3.14;
	int Numarul1, Numarul2;
	scanf_s("%i %i", &Numarul1, &Numarul2);
	ariacercului = pi * Numarul1 * Numarul1;
	printf("Aria cercului este: %f\n", ariacercului);
	ariadreptunghiului = Numarul1 * Numarul2;
	printf("Aria dreptunghiului este: %f", ariadreptunghiului);
}