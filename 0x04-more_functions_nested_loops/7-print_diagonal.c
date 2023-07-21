#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times the line should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int la;
		int lb;

		for (la = 0; la < n; la++)
		{
			for (lb = 0; lb < n; lb++)
			{
			if (lb == la)
				_putchar('\\');
			else if (lb < la)
				_putchar('\n');
			}
		}
	}
}
