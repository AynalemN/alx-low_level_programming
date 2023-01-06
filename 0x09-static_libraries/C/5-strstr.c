#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be scanned.
 * @needle: string to be searche with-in haystack string.
 * Return: a pointer to the 1st occurance of any of the
 * entire sequence of characters specified in needle in the haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
