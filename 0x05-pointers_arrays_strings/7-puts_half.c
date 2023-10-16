#include "main.h"

/**
* puts_half - prints half of a string
*
* @str: the string
*
* Return: void
*/
void puts_half(char *str)
{
	int length = 0;
	int half_length;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half_length = length / 2;
	}
	else
	{
		half_length = (length + 1) / 2;
	}
	for (i = half_length; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
