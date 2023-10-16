#include "main.h"

/**
* rev_string - reverses a string
*
* @s: the string
*
* Return: void
*/
void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
}
