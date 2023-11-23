#include "main.h"

/**
 * set_bit - sets value of bit to 1 at a given index.
 * @n: the number to bet set
 * @index: which to set bit to one
 *
 * Return: it returns (1) on success, -1 other times
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	set_b = 1 << index;
	*n = *n | set_b;

	return (1);
}
