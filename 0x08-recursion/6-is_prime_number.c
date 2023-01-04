#include "main.h"
/**
 * check_prime_number - check if the number is prime
 * @m: is similar with n value
 * @i: iterator
 * Return:1 if prime else 0
 */
int check_prime_number(int i, int m)
{
	if (m == i)
	{
		return (1);
	}
	else if (m % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime_number(i + 1, m));
	}
}
/**
 * is_prime_number - check if input number is prime or not
 * @n: input number
 * Return: 1  if success else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_prime_number(2, n));
	}
}
