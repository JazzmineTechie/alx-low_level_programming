#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: size of the square
 */

void print_square(int size)
{
	int sq;
	int sp;

	sp = 0;

	if (size < 1)
		_putchar('\n');

	while (sp < size)
	{
		sq = 0;
		while (sq < size)
		{
			_putchar('#');
			sq++;
		}
		_putchar('\n');
		sp++;
	}
}
