#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @str: the string
 *
 * Return: the int converted from the string
 */

int _atoi(char *str)
{
	int in, de, n, len, fl, digit;

	in = 0;
	de = 0;
	n = 0;
	len = 0;
	fl = 0;
	digit = 0;

	while (str[len] != '\0')
		len++;

	while (in < len && fl == 0)
	{
		if (str[in] == '-')
			++de;

		if (str[in] >= '0' && str[in] <= '9')
		{
			digit = str[in] - '0';

			if (de % 2)
				digit = -digit;
			n = n * 10 + digit;
			fl = 1;

			if (str[in + 1] < '0' || str[in + 1] > '9')
				break;
			fl = 0;
		}
		in++;
	}

	if (fl == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: counts the number of arguements
 * @argv: array containing the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
