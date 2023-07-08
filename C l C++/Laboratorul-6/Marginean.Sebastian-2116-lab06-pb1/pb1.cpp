/*1. Se citesc trei numere de la tastatură (a, b şi c). Să se determine aria dreptunghiului ale cărui
laturi sunt a şi b şi verificaţi dacă diagonala dreptunghiului este egală cu c.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a, b, c;
	printf("Cele trei numere de la tastaura sunt: ");
	scanf_s("%f %f %f", &a, &b, &c);
	float ariadreptunghiului, diag;
	ariadreptunghiului = a * b;
	printf("Aria dreptunghiului este: %f\n", ariadreptunghiului);
	if (ariadreptunghiului == c)
		printf("Diagonala dreptunghiului este egala cu c");
	else
		printf("Diagonala dreptunghiului nu este egala cu c");
}