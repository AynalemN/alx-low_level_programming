#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name:pointer to string litral
 * @f: a pointer to function call
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
