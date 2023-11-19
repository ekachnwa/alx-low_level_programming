#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the nos of linked list elements
 * @h: pointer to the list_t list
 * Return: nos of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nos = 0;

	while (h)
	{
		nos++;
		h = h->next;
	}
	return (nos);
}
