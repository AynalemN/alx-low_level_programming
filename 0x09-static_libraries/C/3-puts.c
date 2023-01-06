#include "main.h"
/**
 * _puts - prints out a string
 *
 * @str: is the input value
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
