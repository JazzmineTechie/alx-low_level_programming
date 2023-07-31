#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory
 * @b: the constant byte
 * @n: Number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
