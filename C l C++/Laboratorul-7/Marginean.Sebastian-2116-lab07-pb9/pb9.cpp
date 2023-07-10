/*9. Două maşini se deplasează una spre cealaltă cu vitezele v1 şi v2, plecând din două oraşe situate la distanţa d=100km. Vitezele celor
două mașini se citesc de la tastatură. Afisați timpul după care se întâlnesc, exprimat în minute.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float intalnire(float, float, float);

int main() {
	float v1, v2, d, intalnirea;
	d = 100;
	printf("Sa se scrie viteza pe care o are prima masina: ");
	scanf_s("%f", &v1);
	printf("\nSa se scrie viteza pe care o are a doua masina: ");
	scanf_s("%f", &v2);
	intalnirea = intalnire(v1, v2, d);
	printf("\nTimpul dupa care se intalnesc cele 2 masini este: %.0f minute", intalnirea);
}

float intalnire(float v1, float v2, float d) {
	float t, v;
	v = v1 + v2;
	t = d / v;
	t = t * 60;
	return t;
}

/*
Sa se scrie viteza pe care o are prima masina: 100

Sa se scrie viteza pe care o are a doua masina: 100

Timpul dupa care se intalnesc cele 2 masini este: 30 minute
C:\Users\Margi\source\repos\lab07prob9\Debug\lab07prob9.exe (process 19524) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/