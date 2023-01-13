#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an arraay of integer
 * @min: the minimum memory allocated
 * @max: the max memory allocated
 * Return: pointer to the allocated memeory
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
