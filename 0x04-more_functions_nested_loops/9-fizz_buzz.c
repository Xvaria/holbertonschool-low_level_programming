#include <stdio.h>

/**
 * main - prints "Fizz" "Buzz" or "FizzBuzz"
 * Description: prints "Fizz" "Buzz" or "FizzBuzz" for 3, 5 or 3 and 5
 * Return: 0;
 */
int main(void)
{
	int a;

	for (a = 1; a <= 99; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", a);
	}
	printf("Buzz\n");
	return (0);
}
