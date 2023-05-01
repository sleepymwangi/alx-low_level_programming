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
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = (*current).next;
		(*current).next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
