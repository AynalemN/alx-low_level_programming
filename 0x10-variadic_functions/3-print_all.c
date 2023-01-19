#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list pr_all;
	char *str;
	int  i = 0, separator = 0;

	va_start(pr_all, format);
	while (format && format[i])
	{
		if (separator)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pr_all, int));
				break;
			case 'i':
				printf("%i", va_arg(pr_all, int));
				break;
			case 'f':
				printf("%f", va_arg(pr_all, double));
				break;
			case 's':
				str = va_arg(pr_all, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				separator = 0;
				i++;
				continue;
		}
		separator = 1;
		i++;
	}
	putchar('\n');
	va_end(pr_all);
}
