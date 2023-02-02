#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head of the node
 * @index: index of the node
 * Return: the nth node f a listint_t else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
