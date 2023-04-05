#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to pointer of first node of listint_t list.
 * @n: Integer to be included in the new node.
 *
 * Return: Address of the new node or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	(*new_node).n = n;
	(*new_node).next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - insert a new node at a specified index in,
 * a linked list.
 * @head: A pointer to the head node of the linked list
 * @idx: The index where the new node should be inserted
 * @n: The integer value to store in the new node
 * Return: A pointer to the new head node of the linked list,
 * or NULL if the operation fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	current = *head;
	while (current != NULL && count < idx - 1)
	{
		count++;
		current = (*current).next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	(*new_node).n = n;
	(*new_node).next = (*current).next;
	(*current).next = new_node;

	return (new_node);
}
