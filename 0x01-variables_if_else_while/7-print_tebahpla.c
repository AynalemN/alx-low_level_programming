#include <stdio.h>
/**
 * main- entry point to print out lower case alphabet in reverse.
 *Return: 0 if successful.
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
