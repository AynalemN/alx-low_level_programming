#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: the pointer passed
 * @n: is the number of elements of the array to be printed.
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
