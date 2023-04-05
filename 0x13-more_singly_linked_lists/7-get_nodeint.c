#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a specified index in a linked list
 * @head: A pointer to the head node of the linked list
 * @index: The index of the node to retrieve
 * Return: A pointer to the node at the specified index,
 * or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = (*current).next;
	}
	return (NULL);
}

