
#include "main.h"
/**
 * _memset - Block of memory with values
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes
 * Return: change array with new value for n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}
