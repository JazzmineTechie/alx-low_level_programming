#include "main.h"

/**
 * is_prime_number - check for prime number
 * @n: input
 *
 * Return: 1 for prime 0 for not prime number
 */

int is_prime_number(int n)
{
	int j = 2;

	for (n > 1)
	{
		if (n % j == 0)
		is_prime_number(j + 1, n);
		_putchar('\n');
		return (0);
	}
	else
	{
		return ('-1');
	}
}
