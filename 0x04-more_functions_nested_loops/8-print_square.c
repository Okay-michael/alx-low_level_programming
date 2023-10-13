#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
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
