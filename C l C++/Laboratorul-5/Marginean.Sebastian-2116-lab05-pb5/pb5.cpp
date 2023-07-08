/*7. Se citesc de la tastatură 2 numere reale. Să se realizeze operațiile de adunare
, scădere, înmulțire și împărțire cu valorile date. Să se afișeze rezultatele
obținute, apoi să se rotunjească valorile obținute la valori întregi, folosind
operatorul cast și fără a folosi funcții specifice. Să se afișeze apoi valoarea
minimă dintre numerele citite folosind operatorul condițional (ternar).*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int c, min;
	float a, b, adunare, scadere, inmultire, impartire;
	printf("Dati cele 2 numere: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	adunare = a + b;
	scadere = a - b;
	inmultire = a * b;
	impartire = a / b;
	printf("Suma= %f \n", adunare);
	printf("Scadere= %f \n", scadere);
	printf("Inmultire= %f \n", inmultire);
	printf("Impartirea= %f \n", impartire);
	c = (int)(adunare);
	printf("Valoarea sumei rotunjite: %d\n", c);
	c = (int)(scadere);
	printf("Valoarea scaderii rotunjite: %d\n", c);
	c = (int)(inmultire);
	printf("Valoarea produsului rotunjit: %d\n", c);
	c = (int)(impartire);
	printf("Valoarea impartirii rotunjite: %d\n", c);
	if (a < b)
		min = a;
	else
		min = b;
	printf("Cel mai mic numar este : % d", min);
}