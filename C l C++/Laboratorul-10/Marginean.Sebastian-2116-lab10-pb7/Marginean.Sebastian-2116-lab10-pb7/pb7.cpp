/*7. Sa se scrie un program care preia din linia de comanda siruri de caractere si afiseaza sirul
rezultat din concatenarea acestora*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define DIM 255	

int main(int argc, char* argv[]) {
	char s[DIM] = "";
	if (argc == 1) {
		printf("\nNu ati introdus numerele necesare.");
	}
	else {
		for (int i = 1; i < argc; i++) {
			strcat(s, argv[i]);
		}
		printf("\nSirul rezultat din concatenarea acestora este: %s", s);
	}
}