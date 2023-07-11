/*5. Sa se scrie o aplicatie C care citeste un fisier text linie cu linie si il afiseaza pe ecran. Se va
folosi un fisier existent.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp;
	char s[] = "";
	if (fp = fopen("test.txt", "r")) {
		while (!feof(fp)) {
			fscanf(fp, "%s", s);
			printf("%s\n", s);
		}
	}
	else {
		printf("\n Eroare la citirea fisierului !");
		exit(1);
	}
	fclose(fp);
	exit(1);
}