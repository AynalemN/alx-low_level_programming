#include "main.h"
/**
 * _isdigit - is the function that checks for a digit (0 through 9)
 * @c: the argument
 * Return: 1 if c is a digit else 0
 */

int _isdigit(int c)
{
	if (c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
