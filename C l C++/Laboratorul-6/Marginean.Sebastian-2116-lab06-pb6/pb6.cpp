/*6. S� se scrie un program care determin� cel mai mare divizor comun a doi �ntregi.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	printf("Scrieti doua valori intregi: ");
	scanf_s("%d %d", &a, &b);
	while (a != b) {
		if (a > b) a -= b;
		b -= a;
	}
	printf("Cel mai mare divizor comun este: %i", a);
}