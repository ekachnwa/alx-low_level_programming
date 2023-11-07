#include "main.h"

/**
 * _strlen - Str length
 * @s: str
 * Return: length of str
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
