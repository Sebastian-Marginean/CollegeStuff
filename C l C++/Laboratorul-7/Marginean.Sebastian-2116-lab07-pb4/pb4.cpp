/*4. Citiţi de la tastatură două valori întregi care reprezintă catetele unui triunghi dreptunghic.
Determinaţi ipotenuza şi perimetrul triunghiului. Afişaţi rezultatul pe linii diferite.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float ipotenuza(float, float);
float perimetru(float, float, float);

int main() {
	float a, b;
	float ip, per;
	printf("Sa se scrie doua valori care reprezinta catetele unui triunghi dreptunghic: ");
	scanf_s("%f %f", &a, &b);
	ip = ipotenuza(a, b);
	printf("Ipotenuza triunghiului este: %f", ip);
	per = perimetru(a, b, ip);
	printf("\nPerimetrul triunghiului este: %f", per);
}

float ipotenuza(float a, float b) {
	float a1 = a * a + b * b;
	return sqrt(a1);
}

float perimetru(float a, float b, float c) {
	return a + b + c;
}


/*
Sa se scrie doua valori care reprezinta catetele unui triunghi dreptunghic: 2 3
Ipotenuza triunghiului este: 3.605551
Perimetrul triunghiului este: 8.605551
C:\Users\Margi\source\repos\Lab07Prob4\Debug\Lab07Prob4.exe (process 10944) exited with code 0.
Press any key to close this window . . .*/