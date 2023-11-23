#include "lists.h"

/**
 * sum_listint - calculates total of all data in listint_t list
 * @head: first node in the linked list
 * Return: resulting calculation
 */
int sum_listint(listint_t *head)
{
	int addition = 0;
	listint_t *temp = head;

	while (temp)
	{
		addition += temp->n;
		temp = temp->next;
	}

	return (addition);
}
