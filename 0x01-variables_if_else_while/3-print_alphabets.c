#include <stdio.h>
/**
 * main - prints an alphabet in both lower and upper case
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
