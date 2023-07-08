/*5. Să se scrie un program care citeşte de la tastatură un număr întreg
şi afişează numărul de zerouri din reprezentarea sa binară.*/

#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a, nr;
	scanf_s("%i", &a);
	nr = 0;
	while (a > 0)
	{
		if (!(a % 2))
			nr++;
		a = a >> 1;
	}
	printf("Numarul de zerouri din reprezentarea binara a numarului introdus este: %d", nr);
}