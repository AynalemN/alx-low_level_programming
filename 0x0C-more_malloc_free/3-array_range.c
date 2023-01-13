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
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
