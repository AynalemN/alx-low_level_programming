#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int value = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	return (value);
}
