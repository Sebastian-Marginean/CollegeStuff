﻿/*3. Să se scrie un program în care se dau 3 numere întregi și se cere să se calculeze suma lor
ponderată. Ponderile sunt numere subunitare a căror suma este 1 și sunt citite tot de la tastură*/

#include<stdio.h>;
float sumaponderata(int a, int b, int c, float p1, float p2, float p3) {
	float sumaponderata;
	sumaponderata = (a * p1 + b * p2 + c * p3) / (p1 + p2 + p3);
	return sumaponderata;
}
int main() {
	int a, b, c;
	float p1, p2, p3;
	scanf_s("%i %i %i %f %f %f", &a, &b, &c, &p1, &p2, &p3);
	float sp;
	sp = sumaponderata(a, b, c, p1, p2, p3);
	printf("Suma ponderata a celor 3 numere intregi este: %f", sp);
}