#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define pass "ParolaMea"

void parola();

int main() {
	parola();
}

void parola() {
	char p[20];
	int a;
	a = 0;
	while (strcmp(p, pass) != 0) {
		printf("Va rugam sa introduceti o parola: ");
		gets_s(p);
		a++;
	}
	a--;
	printf("%d", a);
}