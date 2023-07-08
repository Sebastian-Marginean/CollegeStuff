/*6. Definiți 3 numere reale a, b, și c. Afișați rezultatul operației 1/a+1/b+1/c.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	float a, b, c, d;
	scanf("%f %f %f", &a, &b, &c);
	d = 1 / (a + 1) / (b + 1) / c;
	printf("%f", d);
}