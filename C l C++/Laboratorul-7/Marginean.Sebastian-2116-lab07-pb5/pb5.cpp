/*5. Citiţi de la tastatură două valori întregi a şi b (a≠0), unde a şi b sunt coeficienţii ecuaţiei
ax+b=0. Rezolvaţi ecuaţia şi afişaţi rezultatul.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float ecuatie(int, int);

int main() {
	int a, b;
	printf("Cititi de la tastatura doua valori intregi a si b: ");
	scanf_s("%d %d", &a, &b);
	if (a != 0) {
		printf("\Solutia ecuatiei este: %f", ecuatie(a, b));
	}
	else printf("Ecuatia nu se poate rezolva deoarece a nu este diferit de 0");
}

float ecuatie(int a, int b) {
	float x;
	x = -(float)b / a;
	return x;
}

/*
Cititi de la tastatura doua valori intregi a si b: 2 3
Solutia ecuatiei este: -1.500000
C:\Users\Margi\source\repos\leb07prob5\Debug\leb07prob5.exe (process 11000) exited with code 0.
Press any key to close this window . . .*/