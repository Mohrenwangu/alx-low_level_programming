#include <stdio.h>

/**
 * main - prints numbers in base 16
 * Return: 0
 */
int main(void)
{
	int num;
	char pa;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (pa = 'a'; pa <= 'f'; pa++)
		putchar(pa);

	putchar('\n');

	return (0);
}
