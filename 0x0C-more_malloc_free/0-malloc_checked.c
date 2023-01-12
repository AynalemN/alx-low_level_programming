#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: a pointer to the memory else return exit status 98
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
