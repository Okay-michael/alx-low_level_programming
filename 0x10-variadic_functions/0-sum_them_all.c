 #include "variadic_functions.h"

/**
 * sum_them_all - sums all the argument passed into it as
 * @n: this is the number of unnamed arguments passed
 * @...: accounts for all the unnamed arguments or parameter not specified
 * Return: the function returns the both the named and unnamed
 * arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argz;
	unsigned int rem = n;
	int tot = 0;

	va_start(argz, n);
	while (rem--)
		tot = tot + va_arg(argz, int);
	va_end(argz);

	return (tot);
}
