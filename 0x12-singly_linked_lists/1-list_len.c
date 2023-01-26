#include "lists.h"
/**
 * list_len - print the number of elements in a linked list_t list.
 * @h: the single list
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int index = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		index += 1;
		h = h->next;
	}
	return (index);
}
