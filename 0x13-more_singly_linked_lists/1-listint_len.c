#include "lists.h"
/**
 * listint_len - print the number of elements
 *
 * @h: the single list/ struct
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}
	return (index);
}
