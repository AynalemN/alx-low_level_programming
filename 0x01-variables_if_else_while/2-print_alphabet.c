#include <stdio.h>

/**
 * main - entry point to print the alphabet in lowercase on a new line.
 * Return: 0 if SUCCESS
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
