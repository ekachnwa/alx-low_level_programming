#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @h: points 1st node in linked list
 * Return: number of items in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenghts = 0;
	int diffs;
	listint_t *temps;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffs = *h - (*h)->next;
		if (diffs > 0)
		{
			temps = (*h)->next;
			free(*h);
			*h = temps;
			lenghts++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenghts++;
			break;
		}
	}

	*h = NULL;

	return (lenghts);
}
