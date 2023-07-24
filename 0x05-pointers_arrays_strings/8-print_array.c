#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array
 * @n: n is the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);
		if (r != n - 1)
			printf(",");
	}
	printf("\n");
}
