#include <stdio.h>

/**
 * main - Entry point
 * Description: "To print alphabets in lowercase using putchar"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
