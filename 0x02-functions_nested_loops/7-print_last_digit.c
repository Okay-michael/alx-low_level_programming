#include "main.h"

/**
* print_last_digit - prints the last digit of an integer
* @val: The integer whose last digit needs to be returned
*
* Return: last digit of val
*/
int print_last_digit(int val)
{
	val %= 10;
	if (val < 0)
		val *= -1;
	_putchar(val + '0');
	return (val);
}
