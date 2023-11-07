#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: 1st string to compare
 * @s2:2nd string to compare
 * Return: less than 0 is s1, more -0 s2,or they're equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
