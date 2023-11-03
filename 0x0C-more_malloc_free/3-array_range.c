#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @mins: minimum range
 * @maxs: maximum range
 * Return: pointer to the new array
 */
int *array_range(int mins, int maxs)
{
	int *ptr;
	int i, size;

	if (mins > maxs)
		return (NULL);

	size = maxs - mins + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; mins <= maxs; i++)
		ptr[i] = mins++;

	return (ptr);
}
