/*8. Declarati un nou tip de date o_struct, care sa contina o variabila de tip intreg, una de tip caracter si un sir de 256 de caractere.
Definiti in main() o variabila statica de tip o_struct, careia sa-i initializati variabilele cu date citite de la intrarea standard.
Declarati apoi un pointer de tip o_struct, numit po_struct, pe care sa-l definiti prin alocarea dinamica a unei zone de memorie
care sa contina un articol de tip o_struct. Initializati campurile structurii de date folosind pointerul
po_struct. Afisati toate campurile si eliberati zona de memorie alocata.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct o_struct {
	int intreg;
	char caracter;
	char s[256];
};

int main() {
	o_struct variabila;
	printf("\n Sa se scrie o variabila de tip intreg: ");
	scanf_s("%d", &variabila.intreg);
	printf("\n Sa se scrie o variabila de tip caracter: ");
	scanf("%s", &variabila.caracter);
	printf("\n Sa se scrie un sir de caractere: ");
	scanf("%s", variabila.s);
	o_struct* po_struct;
	if (po_struct = (struct o_struct*)malloc(sizeof(struct o_struct))) {
		printf("\n Sa se scrie o variabila de tip intreg: ");
		scanf_s("%d", &po_struct->intreg);
		printf("\n Sa se scrie o variabila de tip caracter: ");
		scanf("%s", &po_struct->caracter);
		printf("\n Sa se scrie un sir de caractere: ");
		scanf("%s", po_struct->s);
		printf("\n Campurile din o_struct sunt: ");
		printf("\n Variabila de tip intreg: %d", variabila.intreg);
		printf("\n Variabila de tip carcater: %c", variabila.caracter);
		printf("\n Sirul de caractere este: %s", variabila.s);
		printf("\n Campurile din po_struct sunt: ");
		printf("\n Variabila de tip intreg: %d", po_struct->intreg);
		printf("\n Variabila de tip caracter: %c", po_struct->caracter);
		printf("\n Sirul de caractere este: %s", po_struct->s);
	}
	else
		printf("\n Alocarea nu a reusit !");
	if (po_struct)
		free(po_struct);
}