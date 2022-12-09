#include <stdio.h>
#include <stdl ib.h>
#include <time.h>
/**
 * main - prints a number if positive,negative or 0
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
print("%d is positve\n", n);
}
else if (n == 0)
{
print("%d is zero\n", n);
}
else
{
print("%d is negative\n", n);
}
return (0);
}
