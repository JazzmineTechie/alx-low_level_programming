#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				r++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (r);
		}
		s++
	}
}
