#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of the list
 * @head: pointer to the head node
 * @index: the index of the node, starting from 0
 * Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}

