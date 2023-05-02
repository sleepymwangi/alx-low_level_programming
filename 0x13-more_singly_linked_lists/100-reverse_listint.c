#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in place.
 *
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node; /* the previous and next node */

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}

	(*head)->next = prev_node;
	return (*head);
}
