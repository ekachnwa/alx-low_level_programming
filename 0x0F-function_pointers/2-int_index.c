#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array search
 * @size: size
 * @cmp: pointer to comparing function
 * Return: index of the first element 1 0r 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array && cmp)
	{
		for (z = 0; z < size; z++)
		{
			if (cmp(array[z]) != 0)
				return (z);
		}
	}

	return (-1);
}
