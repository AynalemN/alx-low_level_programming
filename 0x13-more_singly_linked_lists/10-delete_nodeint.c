#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the head node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *prev_node = *head, *tmp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = prev_node->next;
		free(prev_node);
		return (1);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			prev_node = tmp->next;
			tmp->next = prev_node->next;
			free(prev_node);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
