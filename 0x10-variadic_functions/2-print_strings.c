#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the func.
 * Return: strings separated by separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr_s;
	unsigned int i;
	char *c;

	va_start(pr_s, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(pr_s, char*);
		if (c)
		{
			printf("%s", c);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(pr_s);
}
