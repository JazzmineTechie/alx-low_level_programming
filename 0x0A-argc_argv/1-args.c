#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args passed
 * @argc: counts the number of arguements
 * @argv: array containing the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /**overlook argv**/
	printf("%d\n", argc - 1);
	return (0);
}
