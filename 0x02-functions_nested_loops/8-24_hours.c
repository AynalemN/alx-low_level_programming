#include "main.h"
/**
 * jack_bauer - prints every minute of Jack Bauer, starting from 00:00 to 23:59
 * h is for hour m is for min and f is for calculating the first digit
 * l is for calculating the last digit of a number.
 * Return: Always  0.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h <= 9)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else if (h >= 10)
			{
				int f = h / 10;
				int l = h % 10;

				_putchar(f + '0');
				_putchar(l + '0');
			}
			if (m <= 9)
			{
				_putchar(':');
				_putchar('0');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				int f = m / 10;
				int l = m % 10;

				_putchar(':');
				_putchar(f + '0');
				_putchar(l + '0');
			}
		}
	}
	_putchar('\n');
}
