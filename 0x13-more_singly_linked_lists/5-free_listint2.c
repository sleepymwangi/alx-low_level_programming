#include "lists.h"

/**
 * free_listint2 - free a linked list and set head to NULL
 * @head: A pointer to a pointer to the head node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *mem;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		mem = *head;
		*head = (*mem).next;
		free(mem);
	}
	*head = NULL;
}
