#include "main.h"
/**
 * get_bit -  func that returns the value of a bit at a given index.
 * @n: number
 * @index: the index
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index < sizeof(n) * 8)
	{
		mask <<= index;
		if (mask & n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (-1);
	}
}
