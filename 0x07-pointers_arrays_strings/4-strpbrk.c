#include "main.h"
/**
 * _strpbrk-  locates the first occurrence in the string s
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: a pointer to character if found else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
