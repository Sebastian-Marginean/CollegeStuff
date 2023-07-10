/*2. Scrieţi o aplicaţie care citeşte de la intrarea standard două valori pentru capacitățile C1 şi C2, .
Să se calculeze prin intermediul a două funcții capacitatea echivalentă în serie și în paralel.
Rezultatele se vor afișa cu 4 zecimale și aliniere la stânga.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float CapEchSer(float, float);

float CapEchPar(float, float);

int main() {
	float c1, c2, s, p;
	printf("Sa se scrie doua valori pentru capacitatile c1 si c2: ");
	scanf_s("%f %f", &c1, &c2);
	s = CapEchSer(c1, c2);
	printf("Capacitatea echivalenta in serie este: %.4f", s);
	p = CapEchPar(c1, c2);
	printf("\nCapacitatea echivalenta in paralel este: %.4f", p);
}

float CapEchSer(float c1, float c2) {
	return (c1 * c2) / (c1 + c2);
}

float CapEchPar(float c1, float c2) {
	return c1 + c2;
}

/*
Sa se scrie doua valori pentru capacitatile c1 si c2: 2 3
Capacitatea echivalenta in serie este: 1.2000
Capacitatea echivalenta in paralel este: 5.0000
C:\Users\Margi\source\repos\lab07prob2\Debug\lab07prob2.exe (process 4872) exited with code 0.
Press any key to close this window . . .*/