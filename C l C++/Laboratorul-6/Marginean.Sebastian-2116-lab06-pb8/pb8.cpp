/*8. S� se scrie un program care determin� c�tul �mp�r�irii a doi �ntregi folosind sc�deri succesive*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c = 0;
	printf("Deimpartitul este: ");
	scanf_s("%i", &a);
	printf("Impartitorul este: ");
	scanf_s("%i", &b);
	if (b > a) {
		printf("Catul impartirii este: %i", c);
	}
	else {
		while (a >= b) {
			a -= b;
			c++;
		}
		printf("Catul impartirii este: %i", c);
	}
}