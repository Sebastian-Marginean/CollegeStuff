/*7. Se citește de la tastatură un număr întreg, ce reprezintă raza unui cerc. Să se implementeze
funcțiile ce calculează lungimea și aria cercului. Să se afișeze aceste valori într-un câmp de
afișare cu dimensiunea 10. Pentru valoarea lui PI definiți o constantă simbolică.*/

#define _CRT_SECURE_NO_WARNINGS
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <stdio.h>
#include <math.h>

float lungime(int);
float aria(int);

int main() {
	int raza;
	printf("Raza cercului este: ");
	scanf_s("%d", &raza);
	printf("\nLungimea cercului este: %f", lungime(raza));
	printf("\nAria cercului este: %f", aria(raza));
}

float lungime(int raza) {
	float l;
	l = (float)(2 * M_PI * raza);
	return l;
}

float aria(int raza) {
	float a;
	a = (float)(M_PI * (raza * raza));
	return a;
}

/*
Raza cercului este: 4

Lungimea cercului este: 25.132742
Aria cercului este: 50.265484
C:\Users\Margi\source\repos\lab07prob7\Debug\lab07prob7.exe (process 11316) exited with code 0.
Press any key to close this window . . .
*/