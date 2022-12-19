#include "main.h"
/**
 * swap_int - a function that swaps the value of two integers
 * @a: first integer address value
 * @b: second integer address value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
