/*6. Scrieti un program C care citeste de la tastatura valori reale in format float. Valorile citite vor fi
scrise intr-un fisier text cu numele citit din linia de comanda. Citi�i apoi fisierul si afisati valorile
mai mari decat o valoare data, citita tot de la tastatura.*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fp;
	float f, m;
	int d;
	if (argc == 0) {
		printf("\n Nu ati introdus numele fiserului !");
		exit(1);
	}
	else {
		char fisier[25];
		strcpy(fisier, argv[1]);
		if (fp = fopen(fisier, "w")) {
			printf("\n Sa se scrie cate valori in format float doriti sa apara in fisier: ");
			scanf_s("%d", &d);
			for (int i = 0; i < d; i++) {
				printf("\n Sa se scrie valoarea reala a numarului %d : ", i + 1);
				scanf_s("%f", &f);
				fprintf(fp, "%f", f);
			}
			if (fp = fopen(fisier, "r")) {
				printf("\n Sa se scrie valoarea lui M: ");
				scanf_s("%f", &m);
				printf("Valorile mai mari decat %.2f sunt: ", m);
				while (!feof(fp)) {
					fscanf_s(fp, "%f", &f);
					if (f > m)
						printf("%.2f ", f);
				}
			}
			else {
				printf("\n Eroare la citirea fisierului !");
				exit(1);
			}
		}
		else {
			printf("\n Eroare la scrierea in fisier !");
			exit(1);
		}
	}
	fclose(fp);
}