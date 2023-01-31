#include "lists.h"
/**
 * pop_listint - delete the head of node
 * @head: the head node
 * Return: the head node’s data (n), if empty return 0
 */
int pop_listint(listint_t **head)
{
	unsigned int index = 0;
	listint_t *new_node;

	if (*head != NULL)
	{
		new_node = (*head)->next;
		index = (*head)->n;
		free(*head);
		*head = new_node;
	}
	return (index);
}
