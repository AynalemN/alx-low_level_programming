#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n : the number
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is less than 0.
 */
int print_sign(int n)
{
	int n;

	if (n >= 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return ('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
