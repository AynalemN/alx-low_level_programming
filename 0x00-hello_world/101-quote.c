#include <stdio.h>
/* To use the write() function*/
#include <unistd.h>
/**
 * main -entry point.
 * count the buffer start(fd) and end (count)
 * Return: 1 error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}
