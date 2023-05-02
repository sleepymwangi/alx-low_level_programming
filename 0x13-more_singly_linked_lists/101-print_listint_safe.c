#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: the pointer to the head of the node
 *
 * Return: the number of nodes in the list and exits with status 98 if it fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t no_nodes = 0; /* the number of nodes */
	long int d;

	while (head)
	{
		d = head - head->next;
		no_nodes++;

		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (no_nodes);
}
