/*3. S� se scrie un program care afi�eaz� valorile bi�ilor unei variabile de
tip unsigned char aplic�nd succesiv operatorul de deplasare dreapta �i operatorul %*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	unsigned char c;
	int i, d;
	scanf_s("%c", &c);
	for (i = 0; i <= sizeof(c) * 7; i++)
	{
		printf("\n Bitul care se afla pe pozitia %i %c", i, " este ", d = (int)(c % 2));
		c = c >> 1;
	}
}