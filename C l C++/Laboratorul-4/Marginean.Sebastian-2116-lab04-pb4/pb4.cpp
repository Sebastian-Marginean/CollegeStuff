/*Să se scrie un program în care se citesc pe rând 3 caractere de la tastatură și se afișează
apoi pe o singură linie separate prin caracterul punct.Ex: A.B.C*/

#include <stdio.h>

int main() {
	char a, b, c;
	scanf_s(" %c", &a);
	scanf_s(" %c", &b);
	scanf_s(" %c", &c);
	printf("%c.%c.%c", a, b, c);

}