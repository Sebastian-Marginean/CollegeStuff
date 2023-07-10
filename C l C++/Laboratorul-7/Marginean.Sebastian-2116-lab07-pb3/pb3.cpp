/*3. Combinați cele două probleme anterioare într-una singură. Citiți valori pentru două rezistențe
și două capacități și afișați rezultatele grupărilor în serie și paralel.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float serie(float, float);
float paralel(float, float);
float CapEchSer(float, float);
float CapEchPar(float, float);

int main() {
	float r1, c1, r2, c2, s, p, res, rep;
	printf("Sa se dea 2 valori pentru rezistentele r1 si r2: ");
	scanf_s("%f %f", &r1, &r2);
	printf("Sa se scrie doua valori pentru capacitatile c1 si c2: ");
	scanf_s("%f %f", &c1, &c2);
	res = serie(r1, r2);
	printf("Rezistenta echivalenta in serie este: %.3f", res);
	s = CapEchSer(c1, c2);
	printf("\nCapacitatea echivalenta in serie este: %.4f", s);
	rep = paralel(r1, r2);
	printf("\nRezistenta echivalenta in paralel este: %.3f", rep);
	p = CapEchPar(c1, c2);
	printf("\nCapacitatea echivalenta in paralel este: %.4f", p);
}

float serie(float r1, float r2) {
	return r1 + r2;
}

float CapEchSer(float c1, float c2) {
	return (c1 * c2) / (c1 + c2);
}

float paralel(float r1, float r2) {
	return (r1 * r2) / (r1 + r2);
}

float CapEchPar(float c1, float c2) {
	return c1 + c2;
}

/*
Sa se dea 2 valori pentru rezistentele r1 si r2: 2 3
Sa se scrie doua valori pentru capacitatile c1 si c2: 2 3
Rezistenta echivalenta in serie este: 5.000
Capacitatea echivalenta in serie este: 1.2000
Rezistenta echivalenta in paralel este: 1.200
Capacitatea echivalenta in paralel este: 5.0000
C:\Users\Margi\source\repos\lab07prob2\Debug\lab07prob2.exe (process 9616) exited with code 0.
Press any key to close this window . . .*/