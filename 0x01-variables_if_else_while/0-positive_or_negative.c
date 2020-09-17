#include <stdlib.h>
#include <time.h>
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
if (n > 0)
{
printf("The number" n "is positive\n");
}
else if (n == 0)
{
printf("The number" n "is zero\n");
}
else
{
printf("The number" n "is negative\n");
}
return (0);
}
