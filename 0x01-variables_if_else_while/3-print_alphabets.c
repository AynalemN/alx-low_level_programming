#include <stdio.h>

/**
 * main -entry point to print out the alphabet in capital and small letter
 * Return: 0 (if success)
 */

int main(void)
{
	char s;
	char C;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
