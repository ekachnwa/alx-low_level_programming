#include "main.h"

/**
 * _strncpy - copies str
 * @dest: dest str
 * @src: source of  str
 * @n: number of bytes to copy
 * Return: pointer to resulting str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
