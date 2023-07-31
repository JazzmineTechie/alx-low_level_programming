#include "main.h"

/**
 * _memcpy - Copies memory area
 * @n: number of bytes
 * @src: memory area
 * @dest: destination
 *
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
