#include "lists.h"
/**
 * add_nodeint_end -adds a new node at the end of a listint_t list
 * @head: double pointer
 * @n: int value
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *tail_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (*head);
	}
	tail_node = *head;

	while (tail_node->next != NULL)
	{
		tail_node = tail_node->next;
	}
	tail_node->next = new_node;
	new_node->next = NULL;

	return (*head);
}

