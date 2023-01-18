#include "function_pointers.h"
/**
 * array_iterator - a function that execute a function
 * @array: array pointer
 * @size: size of the array
 * @action: a pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
i	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
