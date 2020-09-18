#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - If
 * Description: Print the last number positive or negative
 * Return: 0
 */
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
printf("Last digit of %i is %i and is ", n, a);
if (a > 5)
{
printf("greater than 5\n");
}
else if (a == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
