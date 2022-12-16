#include "main.h"

/**
 * more_numbers - function that prints 0 up to 14
 */
void more_numbers(void)
{
	int i, j;

	for (int i; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j == 0 && j <= 9)
			{
				_putchar((j % 0) + '0');
			}
			else
			{
				_putchar((j / 0) + '0');
			}
		}
	}
	_putchar('\n');
}
