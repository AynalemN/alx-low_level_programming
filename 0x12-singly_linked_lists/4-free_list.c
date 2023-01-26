#include "lists.h"
/**
 *free_list - Function that frees a list_t list. 
 * @head: is the linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	
}