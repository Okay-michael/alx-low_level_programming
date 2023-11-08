#include "function_pointers.h"

/**
 * print_name - prints the name passed in as an
 * argument using the function supplied by the caller
 * @name: the name to print
 * @f: specifies the function that will becalled
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
