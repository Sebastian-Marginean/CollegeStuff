/*7. Să se scrie un program care citește alternativ 4 litere și 4 numere întregi în variabile separate.
Să se afișeze aceste valori în ordinea inversă a introducerii lor. De ex:
Input: a4b5c6d7
Afișare: 7d6c5b4a*/

#include <stdio.h>

int main() {
	char ch;
	scanf_s("%c", &ch);
	int a;
	scanf_s(" %i", &a);
	char ch1;
	scanf_s(" %c", &ch1);
	int a1;
	scanf_s(" %i", &a1);
	char ch2;
	scanf_s(" %c", &ch2);
	int a2;
	scanf_s(" %i", &a2);
	char ch3;
	scanf_s(" %c", &ch3);
	int a3;
	scanf_s(" %i", &a3);
	printf("%i%c%i%c%i%c%i%c", a3, ch3, a2, ch2, a1, ch1, a, ch);
}