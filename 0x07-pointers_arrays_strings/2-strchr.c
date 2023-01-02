#include "main.h"
/**
 * _strchr - locates a character in a string and onward
 * @s:a ponter to the null-terminated byte string
 * @c:character to search for
 * Return:a pointer to the located character or a null pointer
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	}
	while (*s++)
		;

	return (0);
}
