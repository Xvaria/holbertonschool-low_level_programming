#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - If
 * Description: Print the number in the variable n is positive or negative
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
printf("Last digit of %i is %i", n, a);
if (a > 5)
{
printf("and is greater than 5\n");
}
else if (a == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
