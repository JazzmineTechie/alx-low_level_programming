#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: the string
 *
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar(*s);
	}
	else
	{
	_puts_recursion(s + 1);
	_putchar('\n');
	}
}
