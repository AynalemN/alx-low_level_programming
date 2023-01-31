#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node = NULL;
	listint_t *new_node1 = NULL;

	if (head == NULL)
	{
		return;
	}
	new_node = *head;

	while (new_node != NULL)
	{
		new_node1 = new_node;
		new_node = new_node1->next;
		free(new_node1);
	}
	*head = NULL;
}
