#include "main.h"

/**
 * _isalpha - checks for uppercase and lowercase alphabets
 * @c: character to be checked
 *
 * Return: 1 for alphabets, o if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
