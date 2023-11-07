#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substr
 * @haystack: str to search
 * @needle: substr to look for
 * Return: pointer to beginning of substr or NULL not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[i + k] != needle[k])
				break;
		}
		if (!needle[k])
			return (&haystack[i]);
	}
	return (NULL);
}
