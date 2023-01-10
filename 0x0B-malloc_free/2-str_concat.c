#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string that will be concatenate with s1
 * Return: the pointer to the newly allocated memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	p = (char *)malloc(((i + j) + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}

