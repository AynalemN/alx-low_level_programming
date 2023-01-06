#include "main.h"

/**
 * _strcat - concatinate the second string to the first string.
 * @dest: the first string
 * @src: the second string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; i++)
	{
		dest[i] = src[j++];
	}
	dest[i] = '\0';

	return (dest);
}
