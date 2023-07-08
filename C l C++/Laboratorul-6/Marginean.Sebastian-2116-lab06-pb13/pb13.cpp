/*13. S� se scrie un program care determin� cmmmc a dou� numere citite de la tastatur�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a, b, c, d;
	printf("Scrieti doua numere: ");
	scanf_s("%f %f", &a, &b);
	c = a;
	d = b;
	while (c != d)
	{
		if (c > d) c -= d;
		else d -= c;
	}
	printf("%f", (a * b) / c);
}