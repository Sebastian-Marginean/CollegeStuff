/*8. Citiți de la tastatură mai multe caractere reprezentând litere mici. Să se
transforme caracterele citite în litere mari în 2 moduri:
a) printr-o operație aritmetică;
b) folosind o operație logică și o mască adecvată.*/

/*a)printr-o operație aritmetică*/


/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

char* sch(char* s)
{
	for (int i = 0; s[i] != '\0'; i++)
		s[i] ^= 32;
	return s;
}
int main()
{
	char s[100];
	printf("Scrie un sir\n");
	gets_s(s);
	printf("Sirul schimbat: %s\n", sch(s));
	printf("Sirul initial: %s", sch(s));
}
*/

/* b) folosind o operație logică și o mască adecvată.*/

/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int c = 0;
	char ch, s[100];
	printf("Scrie un sir\n");
	gets_s(s);
	while (s[c] != '\0')
	{
		ch = s[c];
		if (ch >= 'a' && ch <= 'z')
			s[c] = s[c] - 32;
		c++;
	}
	printf("Sirul modificat este: %s\n", s);
}
*/