#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @bx: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int bx)
{
	void *ptr;

	ptr = malloc(bx);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
