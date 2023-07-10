#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void conv();

int main() {
	conv();
}

void conv() {
	char n[20], p[20];
	printf("Sa se scrie numele persoanei: ");
	gets_s(n);
	printf("Sa se scrie prenumele persoanei: ");
	gets_s(p);
	n[0] -= 32;
	p[0] -= 32;
	printf("\nNumele si prenumele acelei persoane este: %s \t%s", n, p);
}