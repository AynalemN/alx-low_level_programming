#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *newhead;

	while (head)
	{
		newhead = head;
		head = head->next;
		free(newhead);
	}
}
