#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as parameter
 * @array: array
 * @size: size
 * @action: pointer function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (!array || !action)
		return;

	for (z = 0; z < size; z++)
		action(array[z]);
}
