#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: A pointer to the head node of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *mem;

	while (head != NULL)
	{
		mem = head;
		head = (*head).next;
		free(mem);
	}
}
