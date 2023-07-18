#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 97; a <= 122; a++)
			_putchar(a);
		_putchar('\n');
	}
}
