#include "main.h"
/**
 * clear_bit - clear bit or set 0
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 is success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	else
	{
		mask = ~mask;
		*n = (*n & mask);
		return (1);
	}
}
