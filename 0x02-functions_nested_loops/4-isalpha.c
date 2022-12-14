#include "main.h"
/**
 * _isalpha - check if the letter is a lower or uppercase.
 *
 * @c: is the letter.
 *
 * Return: 1 if successful else 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' || 'A' && c <= 'z' || 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
