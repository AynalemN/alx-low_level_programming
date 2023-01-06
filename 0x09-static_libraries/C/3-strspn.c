#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 * Return: the length of the segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i = 0, j;

	while (accept[i])
	{
		j = 0;
		while (s[j] != ' ')
		{
			if (accept[i] == s[j])
			{
				len++;
			}
			j++;
		}
		i++;
	}
	return (len);
}
