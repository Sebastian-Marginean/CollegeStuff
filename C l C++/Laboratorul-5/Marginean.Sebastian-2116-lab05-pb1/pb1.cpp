/*1. Să se scrie un program care afişează valoarea polinomului de gradul 3
pentru o anumită valoare a variabilei reale x. Coeficienții polinomului și x
se citesc de la tastatură.*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	float a, b, c, d, x, p;
	printf("Introduceti valoarea lui a = ");
	scanf_s("%f", &a);
	printf("Introduceti valoarea lui b = ");
	scanf_s("%f", &b);
	printf("Introduceti valoarea lui c = ");
	scanf_s("%f", &c);
	printf("Introduceti valoarea lui d = ");
	scanf_s("%f", &d);
	printf("Introduceti valoarea lui x = ");
	scanf_s("%f", &x);
	p = a * (x * x * x) + b * (x * x) + c * x + d;
	printf("Valoarea polionumului este = ");
	printf("%f", p);
}