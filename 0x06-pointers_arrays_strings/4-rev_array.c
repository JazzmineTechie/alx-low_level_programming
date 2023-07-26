#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c;
	int r;

	for (c = 0; c < n--; c++)
	{
		r = a[c];
		a[c] = a[n];
		a[n] = r;
	}
}
