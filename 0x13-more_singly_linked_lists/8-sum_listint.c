#include "lists.h"
/**
 * sum_listint - sum of all the data (n)
 * @head: head of the node
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
