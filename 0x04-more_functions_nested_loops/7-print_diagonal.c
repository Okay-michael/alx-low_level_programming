#include "main.h"

/**
* print_diagonal - draws a diagonal line
*
* @n: the number of times \ should be printed
*
* Return: void
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n >= 1)
		{
			_putchar('\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
	_putchar('\n');
}
