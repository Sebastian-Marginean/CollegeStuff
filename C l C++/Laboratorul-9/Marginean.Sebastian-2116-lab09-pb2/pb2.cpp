/*2. Sa se scrie un program care citeste de la tastatura doua siruri de caractere si afiseaza
numarul de caractere prin care ele difera (adica numarul de caractere care exista in primul si nu
exista in al doilea plus numarul de caractere care exista in al doilea si nu exista in primul).
Folositi pointeri pentru accesul la elementele tablourilor.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DIM 255

void numarCaractere(char x[DIM], char y[DIM]);

int main()
{
	char x[DIM], y[DIM], * c = x, * d = y;
	printf("Sa se scrie primul sir: ");
	gets_s(c, DIM);
	printf("\nSa se scrie al doilea sir: ");
	gets_s(d, DIM);
	numarCaractere(x, y);
}

void numarCaractere(char x[DIM], char y[DIM]) {
	char* c = x, * d = y;
	int a[DIM], b[DIM], i, s = 0;
	for (i = 0; i < DIM; i++)
	{
		a[i] = 0;
		b[i] = 0;
	}
	i = 0;
	while (*(c + i))
	{
		a[*(c + (i++))] = 1;
	}
	i = 0;
	while (*(d + i))
		b[*(d + (i++))] = 1;
	for (i = 0; i < DIM; i++)
		if (a[i] && b[i])
		{
			a[i] = 0;
			b[i] = 0;
		}
	for (i = 0; i < DIM; i++)
	{
		if (a[i])
			s++;
		if (b[i])
			s++;
	}
	printf("\nNumarul de caractere prin care ele difera este: %d", s);
}