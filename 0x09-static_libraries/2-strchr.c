#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in string
 * @s: search
 * @c: find char
 * Return: a pointer to 1st apparance of char c in s or NULL
 */
char *_strchr(char *s, char c)
{
	int h;
	while (1)
	{
		h = *s++;
		if (h == c)
		{
			return (s - 1);
		}
		if (h == 0)
		{
			return (NULL);
		}
	}
}
