/*1. S� se scrie un program pentru determinarea mediei aritmetice a trei numere reale*/

#include<stdio.h>

float mediaartimetica(float a, float b, float c) {
	float mediaaritmetica;
	mediaaritmetica = (a + b + c) / 3;
	return mediaaritmetica;
}
int main() {
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	float ma;
	ma = mediaartimetica(a, b, c);
	printf("Media aritmetica a celor 3 numere reale este: %f", ma);
}