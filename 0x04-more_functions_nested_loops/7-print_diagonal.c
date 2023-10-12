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
	int j;

	for (i = 1; i <= n; i++)
	{
		if (n >= 1)
		{
			if (i >= 2)
			{
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
			continue;
		}
	}
	_putchar('\n');
}
