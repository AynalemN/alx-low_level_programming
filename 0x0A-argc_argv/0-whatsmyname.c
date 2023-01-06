#include <stdio.h>
/**
 * main - accepts command line arguments
 * @argc: the argument count
 * @argv: array of pointers to the strings
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
