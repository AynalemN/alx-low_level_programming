#include <stdio.h>
/**
 * main - print all single digit number, pasing int as a char.
 * Return: 0 if success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
