#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - this function prints numbers to 98
 * @n: this is the take off integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: this is a void returning function
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("\n");
}
