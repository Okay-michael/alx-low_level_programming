#include "main.h"

/**
 * _pow_recursion - this function calculates x to the power of y
 * @x: the base
 * @y: the power
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
