#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @size: number of elements in array
 * @array: the array
 * action: a pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
