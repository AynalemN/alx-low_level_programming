#include <stdio.h>
/**
 * main - prints all the passed arguments
 * @argc: argument count
 * @argv: passed array of strings
 * Return: 0 if successful 
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
