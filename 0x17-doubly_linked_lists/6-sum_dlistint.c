#include "lists.h"
/**
 * sum_dlistint - sum all the data(n) of the doubly Llist
 * @head: pointer to the first node
 * Return: sum of data else 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
