#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be inputted
 */

void puts_half(char *str)
{
	int ln = 0;

	while (*str != '\0')
	{
		ln++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		-putchar(*str);
		str++;
	}
	_putchar('\n');
}
