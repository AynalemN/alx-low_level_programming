#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list or linked list.
 * @h: accept value of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int index = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h =  h->next;
		index++;
	}
	return (index);
}
