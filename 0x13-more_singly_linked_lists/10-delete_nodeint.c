#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of,
 * a listint_t linked list
 * @head: double pointer to head of linked list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t  *current, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;

	if (index == 0)
	{
		*head = (*current).next;
		free(current);
		return (-1);
	}
	while (current != NULL && count < index)
	{
		prev = current;
		current = (*current).next;
		count++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	(*prev).next = (*current).next;
	free(current);

	return (1);
}
