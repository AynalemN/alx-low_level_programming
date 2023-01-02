#include "main.h"
/**
 * _strchr - locates first occurance of a character in a string
 * @s:string
 * @c:character
 * Return:a pointer or null
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return ((char *)s);
		}
	}
	return (0);
}
