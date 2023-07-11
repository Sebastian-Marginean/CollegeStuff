/*. Sa se defineasca o structura cu numele Masina, care are campurile producator, anul fabricatiei, capacitatea_cilindrica si culoarea.
Sa se aloce dinamic memorie pentru n date de tip Masinaa si sa se citeasca informatiile pentru acestea.
Sa se afiseze inregistrarile masinilor de culoare ro�ie, fabricate dup� anul 2010.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct masina {
	char producator[20];
	int anul_fabricatiei;
	int capacitatea_cilindrica;
	char culoare[20];
};

void CitDateMasina(struct masina*);
void AfisDateMasina(struct masina*);

int main() {
	masina* p;
	int i, n;
	printf("\n Sa se scrie cate masini sunt: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("\n Nu sunt destule masini !");
		return 0;
	}
	if (p = (struct masina*)malloc(n * sizeof(struct masina))) {
		printf("\n Sa se scrie informatii despre masini: ");
		for (i = 0; i < n; i++) {
			printf("\n Masina: %d", i + 1);
			CitDateMasina(p + i);
		}
		for (i = 0; i < n; i++) {
			if (((p + i)->anul_fabricatiei > 2010) && (strcmp((p + i)->culoare, "rosie") == 0))
				AfisDateMasina(p);
		}
	}
	else
		printf("\n Alocarea nu a reusit !");
	if (p)
		free(p);
}

void CitDateMasina(struct masina* p) {
	printf("\n Sa se scrie producatorul masinii: ");
	scanf("%s", p->producator);
	printf("\n Sa se scrie anul in care s-a fabricat masina: ");
	scanf_s("%d", &p->anul_fabricatiei);
	printf("\n Sa se scrie capacitatea cilindrica pe care o are masina: ");
	scanf_s("%d", &p->capacitatea_cilindrica);
	printf("\n Sa se scrie culoarea pe care o are masina: ");
	scanf("%s", p->culoare);
}
void AfisDateMasina(struct masina* p) {
	printf("\n Producatorul masinii este: %s", p->producator);
	printf("\n Anul de fabricatie al masinii este: %d", p->anul_fabricatiei);
	printf("\n Capacitatea cilindrica pe care o are masina este: %d", p->capacitatea_cilindrica);
	printf("\n Culoarea masinii este: %s", p->culoare);
}