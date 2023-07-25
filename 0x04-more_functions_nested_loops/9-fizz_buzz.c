#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Multiples of 3 and 5 is FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
