#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: pointer to head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
