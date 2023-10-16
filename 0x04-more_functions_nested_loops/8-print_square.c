#include "main.h"

/**
 * print_square - prints a square
 *
 * @n: size of the square
 *
 * Return: void
 */
void print_square(int n)
{

	int q = 0, qq;

	while (q < n && n > 0)
	{
		qq = 0;
		while (qq < n)
		{
			_putchar('#');
			qq++;
		}
		_putchar('\n');
		q++;
	}
	if (q == 0)
	_putchar('\n');
}
