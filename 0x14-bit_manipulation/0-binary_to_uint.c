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
    unsigned int returnVal = 0;

    if ((b == NULL) && (b[i] != '0' || b[i] != '1'))
    {
        return (0);
    }

	while (b[i] == '0' || b[i] == '1')
	{
		returnVal <<= 1;
		returnVal += b[i] - '0';
		i++;
	}
	return (returnVal);
}