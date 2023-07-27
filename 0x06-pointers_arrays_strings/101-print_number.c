#include "main.h"

/**
 * print_number - prints an integer
 * @n: input value
 * Return: 0
 */

void print_number(int n)
{
	unsigned int l1;

	l1 = n;
	if (n < 0)
	{
		_putchar ('-');
		l1 = n;
	}
	if (l1 / 10 != 0)
	{
		print_number(l1 / 10);
	}
	_putchar((l1 % 10) + '0');
}
