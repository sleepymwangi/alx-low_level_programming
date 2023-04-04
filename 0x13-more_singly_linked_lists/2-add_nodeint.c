#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a linked list
 * @head: A pointer to the head node of the linked list
 * @n: The integer value to store in the new node
 * Return: NULL if memory allocation fails or return,
 * a pointer to the new head node
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
