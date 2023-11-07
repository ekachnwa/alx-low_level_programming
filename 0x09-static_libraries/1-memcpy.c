#include "main.h"

/**
 * *_memcpy - copies memories
 * @dest: destination to memory
 * @src: memory to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
