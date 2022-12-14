#include "main.h"
/**
 * print_last_digit - print out the last digit of a number.
 * @n: passed argument.
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	int y;

	y = n % 10;

	if (y < 0)
	{
		y = -1 * y;
	}
	_putchar('0' + y);
	_putchar('\n')
	return (y);

}
