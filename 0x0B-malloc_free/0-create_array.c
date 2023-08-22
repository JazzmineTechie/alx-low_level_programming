#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * initializes with a specific char
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *s; /** s is string **/
	unsigned int j;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
