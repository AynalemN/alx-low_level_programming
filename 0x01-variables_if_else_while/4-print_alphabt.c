#include <stdio.h>
/**
 * main - prints the alphabet in lower case except q and e.
 * Return: 0 If successful
 */
int main(void)
{
	char S;

	for (S = 'a'; S <= 'z'; S++)
	{
		if (S != 'e' && S != 'q')
		{
			putchar(S);
		}
	}
	putchar('\n');
	return (0);
}
