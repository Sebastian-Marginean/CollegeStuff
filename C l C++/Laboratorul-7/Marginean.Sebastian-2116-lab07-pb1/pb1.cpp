/*1. Realizaţi o aplicaţie care citeşte de la intrarea standard două valori pentru rezistențele R1 şi
R2. Să se calculeze prin intermediul a două funcții rezistența echivalentă în serie și în paralel.
Rezultatele se vor afișa cu 3 zecimale și aliniere la dreapta.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float serie(float, float);

float paralel(float, float);

int main() {
	float r1, r2, res, rep;
	printf("Sa se dea 2 valori pentru rezistentele r1 si r2: ");
	scanf_s("%f %f", &r1, &r2);
	res = serie(r1, r2);
	printf("Rezistenta echivalenta in serie este: %.3f", res);
	rep = paralel(r1, r2);
	printf("\nRezistenta echivalenta in paralel este: %.3f", rep);
}

float serie(float r1, float r2) {
	return r1 + r2;
}

float paralel(float r1, float r2) {
	return (r1 * r2) / (r1 + r2);
}

/*
Sa se dea 2 valori pentru rezistentele r1 si r2: 2 3
Rezistenta echivalenta in serie este: 5.000
Rezistenta echivalenta in paralel este: 1.200
C:\Users\Margi\source\repos\lab07prob1\Debug\lab07prob1.exe (process 9276) exited with code 0.
Press any key to close this window . . .
*/