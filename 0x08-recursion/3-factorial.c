#include "main.h"

/**
 * int factorial - gives the factorial of a number
 * @n: the input
 *
 * Return: the fsctorial of the number n
 */

int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n *factorial (n - 1);
}
