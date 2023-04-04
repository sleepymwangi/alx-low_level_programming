#include "lists.h"

/**
 * pop_listint - function takes a non-empty list, deletes the head node,
 * @head: A pointer to a pointer to the head node of the linked list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *mem;
	int x;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	mem = *head;
	x = (*mem).n;
	*head = (*mem).next;
	free(mem);

	return (x);
}

