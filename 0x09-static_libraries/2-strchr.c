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
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
