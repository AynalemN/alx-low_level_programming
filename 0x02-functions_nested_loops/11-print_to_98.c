#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural number from n to 98.
 *
 * @n: argument input natural number
 *
 * Return: always 0 (if success)
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
