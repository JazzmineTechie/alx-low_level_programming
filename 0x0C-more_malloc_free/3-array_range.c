#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: value 1
 * @max: value 2
 *
 * Return: pointer integer
 */

int *array_range(int min, int max)
{
	int *pointer;
	int position, count = 0;

	if (min > max)
		return (NULL);
	position = (max - min) + 1;
	pointer = malloc(position * sizeof(int));
	if (pointer == NULL)
		return (NULL);
	for (; count < position; count++)
	{
		pointer[count] = min;
		min += 1;
	}
	return (pointer);
}
