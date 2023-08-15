#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string
 * Return: Length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

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

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog name or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t*dog;
	int strlen1;
	int strlen2;
	strlen1 = _strlen(name);
	strlen2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	dog.name = malloc(sizeof(char) * (strlen1 + 1);
	if (dog.name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog.owner = malloc(sizeof(char) * (strlen2 + 1));
	if (dog.owner == NULL)
	{
		free(dog);
		free(dog.name);
		return (NULL);
	}
	_strcpy(dog.name, name);
	_strcpy(dog.owner, owner);
	dog.age = age;
	return (dog);
}
