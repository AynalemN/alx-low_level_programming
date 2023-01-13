#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointrt to the previously allocated memory
 * @old_size: allocated space by ptr
 * @new_size: new allocated memory
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
