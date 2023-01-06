#include <stdio.h>
/**
 * main- to count the number of arguments passed
 * @argc: number of command line arguments
 * @argv: a string of array passed
 * Return: 0 if successsful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
