#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
int m;
int a;
srand(time(0));
m = rand() - RAND_MAX / 2;
a = m % 10;
if (a > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", m, a);
}
else if (a == 0)
{
printf("Last digit of %d is %d and is 0\n", m, a);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", m, a);
}
return (0);
}
