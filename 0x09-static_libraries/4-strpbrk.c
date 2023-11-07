#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for a given set
 * @s: string to search
 * @accept: string containing the bytes
 * Return: pointer to the byte in s that matches accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; *s != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
