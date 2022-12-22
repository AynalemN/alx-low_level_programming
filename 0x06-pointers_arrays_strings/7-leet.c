#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: a string input
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;

	char plain[] = "aAeEoOtTlL";
	char encoded[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; plain[j] != '\0'; j++)
		{
			if (s[i] == plain[j])
			{
				s[i] = encoded[j];
			}
		}
	}
	return (s);
}
