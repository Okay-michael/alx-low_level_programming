#include "main.h"

/**
 * sqr - searches through the integer class for sqrt of n
 * @n: number whose square root is being searched
 * @j: this is actually the value used to control the recursion
 * Return: returns the square root of the number if
 * it exists in the set of integers, otherwise it returns -1
 */
int sqroot(int n, int j)
{
	if (j * j == n)
		return (k);
	if (j * j < n)
		return (sqr(n, j + 1));
	return (-1);
}

/**
 * _sqrt_recursion - this function seeks the the square root N
 * Return: this function return and integer value equal to the
 * root of n if it exits in the set of natural numbers, otherwise
 * it returns -1
 */
int _sqrt_recursion(int n)
{
	int j = 1;
	p = sqroot(n, i);
	return (p);
}