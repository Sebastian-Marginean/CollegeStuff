﻿/*5. Să se scrie un program în care utilizatorul trebuie să introducă un text de forma ”Eu am X
ani” și să se afișeze mai apoi vârsta (ca număr) a utilizatorului.
De ex:
Input: Eu am 19 ani.
Afișare: 19*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char sir[50] = "", subsir[5] = "";
	int pozitie = 0, numar;
	fgets(sir, sizeof(sir), stdin);
	int pozitie_nr = 6;
	while (sir[pozitie_nr] != ' ') {
		subsir[pozitie] = sir[pozitie_nr];
		pozitie_nr++;
		pozitie++;
	}
	numar = atoi(subsir);
	printf("%d", numar);
}