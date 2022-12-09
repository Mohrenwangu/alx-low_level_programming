#include <stdio.h>

/**
 * main - prints combinations of single digits
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 58; y < 68; y++)
	{
		putchar(y);
		if (y != 67)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
