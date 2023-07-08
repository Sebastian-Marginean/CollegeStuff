/*2. S� se scrie un program care cite�te lungimile laturilor unui triunghi
(folosind variabile �ntregi) �i afi�eaz� aria triunghiului ca valoare real�.*/

#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a, b, c;
	float aria, p, t = 2;
	printf("Introduceti valoarea lui a:  ");
	scanf_s("%i", &a);
	printf("Introduceti valoarea lui b:  ");
	scanf_s("%i", &b);
	printf("Introduceti valoarea lui c:  ");
	scanf_s("%i", &c);
	p = (a + b + c) / t;
	aria = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%f", aria);
}