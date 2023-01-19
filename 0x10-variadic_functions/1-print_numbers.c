#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- print numbers
 * @separator: string between the numbers
 * @n: number of integers passed to the function
 * Return: number of integers separated by separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;

	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pr, unsigned int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(pr);
}
