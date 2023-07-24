#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be inputted
 * Return: print
 */

void puts2(char *str)
{
	int n = 0;

	for (; str[n] != '\0'; n++)
	{
		if ((n % 2) == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
