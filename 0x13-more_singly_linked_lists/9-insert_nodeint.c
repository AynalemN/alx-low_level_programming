#include "lists.h"
/**
 * insert_nodeint_at_index -inserts a new node at a given position
 * @head: head of the node
 * @idx: the inde of the list where new node should be added
 * @n: int
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node = malloc(sizeof(listint_t)), *tmp;

	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	if (head)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;

	while (tmp)
	{
		if (i == idx)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
