#include "main.h"

/**
 *print_number - this function prints integers
 *@n: this is an integer value
 *
 *Return: this function returns void
 */
void print_number(int n)
{
	unsigned int y;

	y = n;
	if (n < 0)
	{
		_putchar(45);
		y = -n;
	}
	if (y / 10)
		print_number(y/ 10);
	_putchar((y % 10) + '0');
}
