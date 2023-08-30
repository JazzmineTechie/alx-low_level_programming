#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function allocates memory for an array of elements
 * @nmemb: value 1
 * @size: value 2
 *
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (; j < nmemb * size; j++)
	{
		pointer[j] = 0;
	}
	return (pointer);
}
