#include "main.h"

/**
 * _isdigit - checks for numbers 0 to 9
 * @c: number to be checked
 *
 * Return: 1 if its a digit, 0 if its not
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
