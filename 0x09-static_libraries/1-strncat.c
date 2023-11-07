#include "main.h"

/**
 * _strncat - concatenates n string to another
 * @dest: destination string
 * @src: source string
 * @n: number of str to concatenate
 * Return: a pointer to the resulting of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';

	return (dest);
}
