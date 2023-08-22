#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: counts the number of arguements
 * @argv: array containing the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
