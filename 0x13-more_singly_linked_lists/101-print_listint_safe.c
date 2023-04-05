#include "lists.h"

/**
 * print_listint_safe - Prints a linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = (*slow).next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			break;
		}
	}
	if (slow == NULL || fast == NULL)
	{
		while (head != NULL)
		{
			 printf("[%p] %d\n", (void *)head, head->n);
			 count++;
			 head = (*head).next;
		}
	}
	return (count);
}
