#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: the first string
 * @src: the second string
 * @n: size-t
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
