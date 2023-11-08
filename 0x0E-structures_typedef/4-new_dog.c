#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies string pointed src
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - new dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to  new dog (Success), else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int s1, s2;

	s1 = _strlen(name);
	s2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (s1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (s2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
