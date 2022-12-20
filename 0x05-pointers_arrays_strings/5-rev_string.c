#include "main.h"
/**
 * rev_string - print the string in reverse
 *
 * @s: is the pointer parameter passed
 */
void rev_string(char *s)
{
	char temp;
	int i, j, k;

	j = 0;
	k = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	k = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		k--;
	}
}

