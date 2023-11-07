#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: append to string
 * @src: string to add
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
