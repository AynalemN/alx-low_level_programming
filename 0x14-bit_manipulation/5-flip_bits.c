#include "main.h"
/**
 * flip_bits - toggle the bits
 * @n: the number
 * @m: the mask
 * Return: 1 if success else -1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  i = 0, index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			i++;
		}
		index >>= 1;
	}
	return (i);
}
