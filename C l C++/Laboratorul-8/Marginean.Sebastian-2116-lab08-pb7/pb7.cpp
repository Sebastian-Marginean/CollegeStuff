#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void citireMatrice(float a[3][3], int n, int m);
float sumaElemCol(float a[3][3], int n, int m);
float sumaElemCol1(float a[3][3], int n, int m);
float sumaElemCol2(float a[3][3], int n, int m);
void rearanjareMatrice(float a[3][3], int n, int m);

int main() {
	float a[3][3];
	int n, m;
	n = 3;
	m = 3;
	printf("\n Introduceti elementele matricei: \n");
	citireMatrice(a, n, m);
	printf("\n Matricea rearanjata este: \n");
	rearanjareMatrice(a, n, m);
}

void citireMatrice(float a[3][3], int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("\ta[%d][%d] = ", i, j);
			scanf_s("%f", &a[i][j]);
		}
}
float sumaElemCol(float a[3][3], int n, int m) {
	float s;
	for (int i = 0; i < n; i++) {
		s = 0;
		for (int j = 0; j < m; j++)
			while (j == 0) {
				s += a[i][j];
				return s;
			}
	}
}

float sumaElemCol1(float a[3][3], int n, int m) {
	float s1;
	for (int i = 0; i < n; i++) {
		s1 = 0;
		for (int j = 0; j < m; j++)
			while (j == 1) {
				s1 += a[i][j];
				return s1;
			}
	}
}

float sumaElemCol2(float a[3][3], int n, int m) {
	float s2;
	for (int i = 0; i < n; i++) {
		s2 = 0;
		for (int j = 0; j < m; j++)
			while (j == 2) {
				s2 += a[i][j];
				return s2;
			}
	}
}

void rearanjareMatrice(float a[3][3], int n, int m) {
	float aux = 0, b, c, d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (sumaElemCol1(a, n, m) > sumaElemCol2(a, n, m)) {
				for (i = 0; i < n; i++) {
					aux = a[i][1];
					a[i][1] = a[i][2];
					a[i][2] = aux;
				}
			}
			if (sumaElemCol(a, n, m) > sumaElemCol1(a, n, m)) {
				for (i = 0; i < n; i++) {
					aux = a[i][0];
					a[i][0] = a[i][1];
					a[i][1] = aux;
				}
			}
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("\t%.2f", a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}