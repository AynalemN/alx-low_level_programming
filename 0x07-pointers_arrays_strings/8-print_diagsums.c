#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum diagonals of a square matrix of integers
 * @a: is pointer array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
