#include "lists.h"

/**
 * insert_nodeint_at_index - add new node in list,
 * at a given position
 * @head: pointer to first node in list
 * @idx: index where new node was added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newitem;
	listint_t *temp = *head;

	newitem = malloc(sizeof(listint_t));
	if (!newitem || !head)
		return (NULL);

	newitem->n = n;
	newitem->next = NULL;

	if (idx == 0)
	{
		newitem->next = *head;
		*head = newitem;
		return (newitem);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newitem->next = temp->next;
			temp->next = newitem;
			return (newitem);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
