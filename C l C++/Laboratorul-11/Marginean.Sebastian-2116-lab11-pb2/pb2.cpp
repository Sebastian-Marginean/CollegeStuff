/*2. Fie o aplicatie de gestiune distribuita care considera ca trateaza activitatea din 5 ora�e diferite.
In fiecare oras sunt 3 birouri de vanzare. Sa se creeze �n cadrul unei functii un tablou de 5 pointeri catre date de tip flotant, fiecare
pointer din acest tablou referind o zona in heap alocata dinamic de 3 date flotante ce reprezinta situatia vanzarilor la sfar�itul unei zile.
Se cere prelucrarea datelor din fiecare oraa, respectiv din fiecare birou de vanzare, prelucrare ce va include:
� functie care permite introducerea datelor pentru cele 5 orase si respectiv pentru fiecare oras
datele pentru cele 3 magazine din oras;
� functie ce permite determinarea totalului de vanzari pe fiecare oras in parte, valoare pe care o
va returna astfel ca in programul principal se va calcula si afisa media vanzarilor din toate cele
5 orase;
� functie care va permite eliberarea spatiului de memorie alocat dinamic astfel inc�t daca
aceeasi firma are alte 3 magazine in cele 5 orase de profil diferit sa poata realoca un spatiu
echivalent pentru noile prelucrari pe care le va efectua.*/

#define CRT_SECURE_NO_WARNIGNS
#include <stdio.h>
#include <stdlib.h>

void date(float* x[]);
float totalVanzari(float* x);
void eliberareSpatiu(float* x[]);

int main() {
	float* x[5], vanzari = 0, media;
	date(x);
	for (int i = 0; i < 5; i++) {
		vanzari += totalVanzari(*(x + i));
	}
	media = vanzari / 5;
	printf("\n Media vanzariulor din toate cele 5 orase este: %f", media);
	eliberareSpatiu(x);
}

void date(float* x[]) {
	for (int i = 0; i < 5; i++) {
		if (*(x + i) = (float*)malloc(3 * sizeof(float)));
		else
			printf("\n Alocarea nu a reusit");
	}
	for (int i = 0; i < 5; i++) {
		printf("\n In orasul %d : ", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("\n Biroul %d are vanzari in valoare de:", j + 1);
			scanf_s("%f", x[i] + j);
		}
	}

}

float totalVanzari(float* x) {
	float suma = 0;
	for (int i = 0; i < 3; i++)
		suma += *(x + i);
	return suma;
}

void eliberareSpatiu(float* x[]) {
	for (int i = 0; i < 5; i++) {
		if (*(x + i))
			free(*(x + i));
	}
	free(x);
}