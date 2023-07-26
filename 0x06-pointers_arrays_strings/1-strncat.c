#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: a string
 * @str: another string
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
