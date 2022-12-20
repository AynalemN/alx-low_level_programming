#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: is the pointer argumnet passed
 * n is the counter or the length
 */
void print_rev(char *s)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	for (j = n - 1;;)
	{
		if (j >= 0)
		{
			_putchar(s[j]);
			j--;
		}
	}
	_putchar('\n');
}
