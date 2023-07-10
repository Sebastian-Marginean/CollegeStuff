/*6. Se citesc de la tastatură numele a 2 studenți și notele fiecăruia la programare (laborator, teoretic, practic). Să se implementeze
o funcție ce calculează media notelor lor. Să se afișeze mai apoi pe linii separate numele fiecărui student într-un câmp de afișare cu
dimensiunea 20, aliniat la dreapta și media lor, cu o precizie de 2 zecimale.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float media(float, float, float);

int main() {
	char nume1[20], nume2[20];
	float l1, l2, t1, t2, p1, p2, m1, m2;
	printf("Sa se scrie numele primului student: ");
	scanf("%s", nume1);
	printf("\nSa se scrie numele celui de al doilea student: ");
	scanf("%s", nume2);
	printf("\nSa se scrie nota la programare de la laborator a lui %s : ", nume1);
	scanf_s("%f", &l1);
	printf("\nSa se scrie nota la teoretic de la teoretic a lui %s : ", nume1);
	scanf_s("%f", &t1);
	printf("\nSa se scrie nota la practic de la teoretic a lui %s: ", nume1);
	scanf_s("%f", &p1);
	printf("\nSa se scrie nota la programare de la teoretic a lui %s: ", nume2);
	scanf_s("%f", &l2);
	printf("\nSa se scrie nota la teoretic de la teoretic a lui %s: ", nume2);
	scanf_s("%f", &t2);
	printf("\nSa se scrie nota la practic de la teoretic a lui %s: ", nume2);
	scanf_s("%f", &p2);
	m1 = media(l1, t1, p1);
	m2 = media(l2, t2, p2);
	printf("\n%15s : %.2f", nume1, m1);
	printf("\n%15s : %.2f", nume2, m2);
}

float media(float l, float t, float p) {
	float m;
	m = (l + t + p) / 3;
	return m;
}

/*
Sa se scrie numele primului student: Marginean

Sa se scrie numele celui de al doilea student: Ghiara

Sa se scrie nota la programare de la laborator a lui Marginean : 9

Sa se scrie nota la teoretic de la teoretic a lui Marginean : 8

Sa se scrie nota la practic de la teoretic a lui Marginean: 9

Sa se scrie nota la programare de la teoretic a lui Ghiara: 8

Sa se scrie nota la teoretic de la teoretic a lui Ghiara: 9

Sa se scrie nota la practic de la teoretic a lui Ghiara: 8

	  Marginean : 8.67
		 Ghiara : 8.33
C:\Users\Margi\source\repos\lab07prob6.1\Debug\lab07prob6.1.exe (process 14652) exited with code 0.
Press any key to close this window . . .*/