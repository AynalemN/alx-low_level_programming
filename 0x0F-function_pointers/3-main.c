#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the operation
 * @argc: argument counter
 * @argv: single array of command arguments
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = p(num1, num2);

	printf("%d\n", result);
	return (0);
}
