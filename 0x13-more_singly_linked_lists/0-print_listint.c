#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t
 *
 * @h: takes the value of the single list
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
