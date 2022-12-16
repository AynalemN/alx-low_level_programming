#include "main.h"

/**
 * print_line - draws a straigt line
 * @n: is the number of times the character _
 * should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 1; i >= 1 && i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
