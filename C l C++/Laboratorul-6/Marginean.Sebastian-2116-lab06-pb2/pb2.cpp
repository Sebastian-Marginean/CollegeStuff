/*2. Să se scrie un program care verifică dacă un număr citit de la tastatură este pătrat perfect.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a;
	printf("Citeste un numar: ");
	scanf_s("%i", &a);
	if ((int)(sqrt(a)) == sqrt(a))
		printf("Numarul citit este un patrat perfect.");
	else
		printf("Numarul citit nu este un patrat perfect.");
}