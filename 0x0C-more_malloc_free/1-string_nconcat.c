#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: value 1
 * @s2: value 2
 * @n: value 3
 *
 * Return: point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int a = 0, b = 0, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (n >= b)
		n = b;
	b = 0;
	point = malloc(sizeof(char) * (a + n + 1));
	if (point == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
	{
		point[c] = s1[c];
	}
	for (; c < (a + n); c++)
	{
		point[c] = s2[c - a];
	}
	point[c] = '\0';
	return (point);
}
