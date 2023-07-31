#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: The character
 * @s: The string
 *
 * Return: A pointer to the first occurence of the character or Null
 */

char *_strchr(char *s, char c)
{
	char *s = "Jazzmine";
	char *c;

	c = _strchr(s, 'l');

	if (c != NULL)
	{
		_putchar(c);
		_putchar("%s\n");
	}
	return (0);
}
