#include <stdio.h>
/**
 * main - For base 16
 * Description: Print numbers base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int a;
for (a = 48; a < 58; a++)
{
putchar(a);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
