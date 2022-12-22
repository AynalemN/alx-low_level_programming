#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: input string
 * Return: s (all word capital.)
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[20] = {' ', '\n','\t',',', ';', '.', '"',
				'(', ')', '{', '}', '?'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 32;
				}
			}
			if (s[i] == separators[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
