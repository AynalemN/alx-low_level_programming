#include "main.h"

/**
 * _strncpy - copies a string at most n bytes
 * @dest: the first string to be copied to
 * @src: the second string to be copied
 * @n: the at most byte
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
