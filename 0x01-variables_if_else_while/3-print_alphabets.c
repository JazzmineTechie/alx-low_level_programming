#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print lower and upper case alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 98)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
