#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning
 * @head: a double pointer
 * @n: integer value
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->next = *head;
	*head = list;
	return (*head);
}
