#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string
 *
 * Return: s
 */
int _strlen_recursion(char *s)
{
	int li = 0; /** li is long integer **/

	if (*s)
	{
		li++;
		li += _strlen_recursion(s + 1);
	}
	return (li);
}
