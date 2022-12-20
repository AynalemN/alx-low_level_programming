#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: is the pointer passed
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		while (i > n)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (i + 1) / 2;
		while (i > n)
		{
			_putchar(str[n]);
			n++;
		}

	}
	_putchar('\n');
}
