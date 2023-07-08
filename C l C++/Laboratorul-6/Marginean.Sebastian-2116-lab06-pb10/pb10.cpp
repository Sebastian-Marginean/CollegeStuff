/*10. S� se scrie un program care determin� num�rul de cifre care compun un num�r �ntreg citit de
la tastatur�*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, p = 0;
	printf("Scrieti un numar intreg: ");
	scanf_s("%d", &n);
	while (n != 0) {
		n = n / 10;
		p++;
	}
	printf("Numarul de cifre care compun un numar intreg este: %d", p);
}