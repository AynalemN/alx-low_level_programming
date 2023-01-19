#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - accepts a variable number of arguments
 * @n: the count of remaining arguments
 * Return: added up and the result returned
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(add, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, unsigned int);
	}
	va_end(add);
	return (sum);

}
