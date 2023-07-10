/*8. Sa se scrie un program care inverseaza sirul de caractere citit din linia de comanda.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	int i, len;
	char sirinv[255];
	len = (int)strlen(*(argv + 1));
	i = len - 1;
	while (i >= 0) {
		sirinv[len - i - 1] = *(*(argv + 1) + i);
		i--;
	}
	printf("\nSirul inversat este:");
	for (i = 0; i < len; i++)
		printf("%c", sirinv[i]);
}