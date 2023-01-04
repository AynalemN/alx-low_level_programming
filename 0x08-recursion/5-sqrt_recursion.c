#include "main.h"
/**
 * my_Sqr - evaluate the number
 * @m: number that iterate
 * @k: the approximate root number
 * Return: m if sucess else -1
 */
int my_Sqr(int k, int m)
{
	if (m * m == k)
	{
		return (m);
	}
	else if (m * m > k)
	{
		return (-1);
	}
	else
	{
		return (my_Sqr(k, m + 1));
	}
}
/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (my_Sqr(n, 1));
}
