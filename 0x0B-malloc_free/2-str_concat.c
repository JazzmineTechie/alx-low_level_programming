#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concate;
	int j, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = l = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[l] != '\0')
		l++;
	concate = malloc(sizeof(char) * (j + l + 1));

	if (concate == NULL)
		return (NULL);
	j = l = 0;
	while (s1[j] != '\0')
	{
		concate[j] = s1[j];
		j++;
	}

	while (s2[j] != '\0')
	{
		concate[j] = s2[l];
		j++, l++;
	}
	concate[j] = '\0';
	return (concate);
}
