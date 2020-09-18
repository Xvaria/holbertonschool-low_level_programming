#include <stdio.h>
/**
 * main - For all
 * Description: prints out all the numbers under 10 with a ,
 * Return: 0
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);
if (a != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
