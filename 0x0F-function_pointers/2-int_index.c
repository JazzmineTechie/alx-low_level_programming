#include "function_pointer.h"

/**
 * int_index - searches for an integer
 * @size: the number of elements in the array
 * @array: the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0 success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]))
			return (ind);
	}
	return (-1);
}
