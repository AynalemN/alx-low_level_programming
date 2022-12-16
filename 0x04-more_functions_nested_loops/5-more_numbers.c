#include "main.h"

/**
 * more_numbers - function that prints 0 up to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			else
			{
				_putchar((j % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
