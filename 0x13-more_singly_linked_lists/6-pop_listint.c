#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 * @head: pointer to the first element in list
 *
 * Return: data inside elements, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numbers;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
