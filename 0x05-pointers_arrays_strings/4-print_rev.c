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
	for (j = n - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
