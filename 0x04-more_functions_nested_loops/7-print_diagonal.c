#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times \ is printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i >= 1 && i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
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
