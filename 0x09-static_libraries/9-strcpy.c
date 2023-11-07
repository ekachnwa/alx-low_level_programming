#include "main.h"

/**
 * *_strcpy - copies the str src terminating null (\0)
 * @dest: pointer to the buffer in which we copy the str
 * @src: str to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght = 0;
	int i;

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
