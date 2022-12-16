#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times \ is printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
