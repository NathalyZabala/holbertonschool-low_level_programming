#include <stdio.h>

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	char m;

	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);

	putchar('\n');

	return (0);
}
