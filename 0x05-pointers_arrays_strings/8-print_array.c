#include "main.h"

/**
* print_array - prints n elements of an array of integers
*
* @a: the array
* @n: the number of integers in the array
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(*a[i])
		while (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
