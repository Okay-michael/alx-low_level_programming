#include "variadic_functions.h"

/**
 * print_numbers - prints integers passed as arguments
 * @separator: used to separate the output
 * @n: the the number of integers to be printed
 * @...: this parameter is the integers to print
 * Description: This function prints integers, separated by separator, followed
 * by a new line. If separator is NULL, it's treated as the empty string.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argz;
	unsigned int rem = n;

	va_start(argz, n);
	if (!separator)
		separator = "";
	while (rem--)
	{
		printf("%i", va_arg(argz, int));
		if (rem)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argz);
}
