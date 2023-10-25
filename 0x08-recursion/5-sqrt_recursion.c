#include "main.h"

/**
 * sqroot - searches through the integer class for sqrt of n
 * @n: number whose square root is being searched
 * @j: this is actually the value used to control the recursion
 * Return: returns the square root of the number if
 * it exists in the set of integers, otherwise it returns -1
 */
int sqroot(int n, int j)
{
	if (j * j == n)
		return (j);
	if (j * j < n)
		return (sqroot(n, j + 1));
	return (-1);
}

/**
 * _sqrt_recursion - this function seeks the the square root in N
 * @n: this this number whose root we want to find
 * Return: this function return and integer value equal to the
 * root of n if it exits in the set of natural numbers, otherwise
 * it returns -1
 */
int _sqrt_recursion(int n)
{
	n = sqroot(n, 1);
	return (n);
}
