#include <main.h>
/**
 *_islower - check for lowercase character.
 *
 *@c: is the letter to be checked.
 *
 *Return: 1 if lowercase else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
