/*8. Se citesc de la tastatură ora plecării unui tren din Cluj și ora la care ajunge la Brașov (oră și
minute). Să se afișeze durata călătoriei (în ore și minute). Țineți cont de schimbarea orei
noaptea*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DurataOre(int, int);
int DurataMinute(int, int);

int main() {
	int OraCluj, OraBrasov, MinutCluj, MinutBrasov, ora, minutul;
	printf("Sa se scrie ora plecarii ternului din Cluj: ");
	scanf_s("%d %d", &OraCluj, &MinutCluj);
	printf("\nSa se scrie ora la care a ajuns trenul in Brasov: ");
	scanf_s("%d %d", &OraBrasov, &MinutBrasov);
	ora = DurataOre(OraCluj, OraBrasov);
	minutul = DurataMinute(MinutCluj, MinutBrasov);
	if (minutul >= 60) {
		minutul = minutul - 60;
		ora++;
	}
	if (minutul < 0) {
		minutul = 60 + minutul;
		ora--;
	}
	printf("\nDurata calatoriei este: %d ore %d min.", ora, minutul);
}

int DurataOre(int OraCluj, int OraBrasov) {
	int orafinala;
	if (OraBrasov > OraCluj) {
		orafinala = OraBrasov - OraCluj;
	}
	else {
		orafinala = 24 - OraCluj + OraBrasov;
	}
	return orafinala;
}

int DurataMinute(int MinutCluj, int MinutBrasov) {
	int minutefinale;
	minutefinale = MinutBrasov - MinutCluj;
	return minutefinale;
}

/*
Sa se scrie ora plecarii ternului din Cluj: 22 16

Sa se scrie ora la care a ajuns trenul in Brasov: 5 10

Durata calatoriei este: 6 ore 54 min.
C:\Users\Margi\source\repos\lab07prob08\Debug\lab07prob08.exe (process 20532) exited with code 0.
Press any key to close this window . . .*/