#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: The number whose sign is checked
*
* Return: returns either -1, 0 or 1.
*/
int print_sign(int n);
{
	int output;

	if (n < 0)
	{
		_putchar('-');
		output = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		output = 0;
	}
	else
	{
		_putchar('+');
		output = 1;
	}
	return (output);
}
