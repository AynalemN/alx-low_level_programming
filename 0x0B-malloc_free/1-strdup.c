#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- copy the string given as a parameter to
 * a newlly allocated space in the heap memory.
 * @str: input string
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	p = (char *)malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (; j < i; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';
	return (p);
	free (p);
}
