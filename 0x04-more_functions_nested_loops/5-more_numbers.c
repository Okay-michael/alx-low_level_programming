#include "main.h"

/**
* more_numbers - prints numbers from 0-9 followed by a new line
*
* Return: void
*/
void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
