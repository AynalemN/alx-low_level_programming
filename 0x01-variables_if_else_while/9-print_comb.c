#include <stdio.h>
/**
 *main- entry point to prints all possible combination of digital numbers
 *Return: 0 if success
 */
int main(void)
{
	int i = '0';
	int d = ',';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(d);
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
