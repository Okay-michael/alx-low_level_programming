#include "main.h"

/**
* print_line - draws a straight line
*
* @n: number of time _ is used
*
* Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n >= 1)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
			break;
		}
	}
	_putchar('\n');
}
