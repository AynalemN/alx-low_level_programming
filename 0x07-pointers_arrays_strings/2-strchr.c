#include "main.h"
/**
 * _strchr - locates a character in a string and onward
 * @s:a ponter to the null-terminated byte string
 * @c:character to search for
 * Return:a pointer to the located character or a null pointer
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
		{
			return(s);
			break;
		}
	}
	return ('\0');
}
