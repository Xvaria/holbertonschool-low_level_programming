#include <stdio.h>
/**
 * main - For
 * Description: Print a to z and A to Z
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar ('\n');
return (0);
}
