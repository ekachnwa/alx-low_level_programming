#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in l-list at index
 * @head: pointer the 1st item in list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temps = *head;
	listint_t *cur = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temps);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temps || !(temps->next))
			return (-1);
		temps = temps->next;
		i++;
	}


	curr = temps->next;
	temps->next = curr->next;
	free(curr);

	return (1);
}
