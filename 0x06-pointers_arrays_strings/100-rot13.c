#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @p: pointer
 * Return: *p
 */

char *rot13(char *p)
{
	int a;
	int b;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJLKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (p[a] == d1[b])
			{
				p[a] = drot[b];
				break;
			}
		}
	}
	return (p);
}
