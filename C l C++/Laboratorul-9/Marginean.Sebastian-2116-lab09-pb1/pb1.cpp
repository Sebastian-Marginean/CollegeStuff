/*1. Sa se scrie un program care citeste de la tastatura un sir de caractere, apoi elimina din sir
caracterele care se repeta si afiseaza in final sirul obtinut, folosind pointeri.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define DIM 100

void eliminaCar(char* p, int x, int& l);

int main() {
    char s[DIM], * p;
    int l;
    printf("Sa se scrie un sir de caractere: ");
    gets_s(s, 100);
    l = strlen(s);
    p = &s[0];
    for (int i = 0; i < l; i++)
        for (int j = i + 1; j < l; j++)
        {
            if (*(p + i) == *(p + j))
            {
                eliminaCar(p, j, l);
                j--;
            }
        }
    printf("\nSirul obtinut este: %s", p);
}

void eliminaCar(char* p, int x, int& l) {
    for (int i = x; i < l; i++)
        *(p + i) = *(p + i + 1);
    l--;
}