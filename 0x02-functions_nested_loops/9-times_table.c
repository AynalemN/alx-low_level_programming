#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0.
 * i and j are the variables to do the matrix multiplication.
 * k is a variable that holds the multiplication
 * f and l are the first digit and last digit
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k;

			k = i * j;
			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				int f = k / 10;
				int l = k % 10;

				_putchar(f + '0');
				_putchar(l + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
