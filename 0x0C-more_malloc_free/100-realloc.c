#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory with malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory
 * @n_size: new size of the new memory
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int n_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (n_size == old_size)
		return (ptr);

	if (n_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(n_size));

	ptr1 = malloc(n_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (n_size < old_size)
	{
		for (i = 0; i < n_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (n_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
