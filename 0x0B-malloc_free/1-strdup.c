#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int j, n = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	ptr = malloc(sizeof(char) * (j + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ptr[n] = str[n];

	return (ptr);
}
