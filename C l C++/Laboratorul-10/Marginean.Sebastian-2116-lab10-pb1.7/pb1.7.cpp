/*1. Rezolva�i problemele din laboratorul de aplica�ii cu tablouri (laboratorul 8, problemele 1-12)
folosind pointeri.*/
/*7. Citi�i de la tastatura elementele unei matrice cu elemente de tip float, cu dimensiunea 3x3.
Rearanja�i coloanele matricei astfel ca suma elementelor de pe o anumit� coloan� sa fie mai
mica decat suma elementelor de pe coloana urm�toare.*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void citireMatrice(int n, int m, float* p);
float sumaElemCol(int n, int m, float* p);
float sumaElemCol1(int n, int m, float* p);
float sumaElemCol2(int n, int m, float* p);
void rearanjareMatrice(int n, int m, float* p);

int main() {
	float a[3][3], * p = &a[0][0];
	int n, m;
	n = 3;
	m = 3;
	citireMatrice(m, n, p);
	printf("\n Matricea rearanjata este: \n");
	rearanjareMatrice(n, m, p);
}

void citireMatrice(int m, int n, float* p) {
	printf("\nIntroduceti elementele matricei:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", p + (i * n + j));
		}
	}
}
float sumaElemCol(int n, int m, float* p) {
	float s;
	for (int i = 0; i < n; i++) {
		s = 0;
		for (int j = 0; j < m; j++)
			while (*(p + j) == 0) {
				s += *(p + i * n + j);
				return s;
			}
	}
}

float sumaElemCol1(int n, int m, float* p) {
	float s1;
	for (int i = 0; i < n; i++) {
		s1 = 0;
		for (int j = 0; j < m; j++)
			while (*(p + j) == 1) {
				s1 += *(p + i * n + j);
				return s1;
			}
	}
}

float sumaElemCol2(int n, int m, float* p) {
	float s2;
	for (int i = 0; i < n; i++) {
		s2 = 0;
		for (int j = 0; j < m; j++)
			while (*(p + j) == 2) {
				s2 += *(p + i * n + j);
				return s2;
			}
	}
}

void rearanjareMatrice(int n, int m, float* p) {
	float aux = 0, b, c, d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (sumaElemCol1(n, m, p) > sumaElemCol2(n, m, p)) {
				for (i = 0; i < n; i++) {
					aux = *(p + i * n + 1);
					*(p + i * n + 1) = *(p + i * n + 2);
					*(p + i * n + 2) = aux;
				}
			}
			if (sumaElemCol(n, m, p) > sumaElemCol1(n, m, p)) {
				for (i = 0; i < n; i++) {
					aux = *(p + i * n + 0);
					*(p + i * n + 0) = *(p + i * n + 1);
					*(p + i * n + 1) = aux;
				}
			}
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("\t%.2f", *(p + i * n + j));
			printf(" ");
		}
		printf("\n");
	}
}