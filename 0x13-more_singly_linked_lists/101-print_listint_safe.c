#include "lists.h"
/**
 * print_listint_safe - Print a linked list that prints a list with loop safety
 * @head: pointer to 1st node of linked list
 * Return: new node item
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmps_n = NULL;
	const listint_t *lst_n = NULL;
	size_t counts = 0;
	size_t new_n;

	tmps_n = head;
	while (tmps_n)
	{
		printf("[%p] %d\n", (void *)tmps_n, tmps_n->n);
		counts++;
		tmps_n = tmps_n->next;
		lst_n = head;
		new_n = 0;
		while (new_n < counts)
		{
			if (tmps_n == lst_n)
			{
				printf("-> [%p] %d\n", (void *)tmps_n, tmps_n->n);
				return (counts);
			}
			lst_n = lst_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counts);
}
