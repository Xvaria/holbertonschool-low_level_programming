#include <stdio.h>
/**
 * main - For if
 * Description: print a to z not e and q
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar ('\n');
return (0);
}
