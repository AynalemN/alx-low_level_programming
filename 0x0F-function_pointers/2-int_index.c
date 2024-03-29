#include "function_pointers.h"
/**
 * int_index - returns the inde of the 1st element
 * @array: pointer array
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL && size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
