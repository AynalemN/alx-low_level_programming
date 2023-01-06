#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: arguments passed
 * Return: 0 if successful else 1
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
