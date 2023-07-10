/*6. Scrieti un program in care sa cititi de la tastatura o serie de mesaje ce vor fi stocate intr-un
tablou de pointeri spre siruri de caractere. Afisati apoi mesajele.*/

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char const* serieMesaje[] = { "Primul Mesaj", "Al doilea mesaj", "Al treilea mesaj", "Al patrulea mesaj" };
	while (i < 5) {
		printf("\n%s", serieMesaje[i]);
		i++;
	}
}