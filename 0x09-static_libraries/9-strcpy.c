#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to its destination.
 * @src: the source
 * @dest: destination
 * Return: the string
 */

char *_strcpy(char *dest, char *src)
{
	int ln = 0;

	while (*(src + ln) != '\0')
	{
		*(dest + ln) = *(src + ln);
		ln++;
	}

	*(dest + ln) = '\0';
	return (dest);
}

