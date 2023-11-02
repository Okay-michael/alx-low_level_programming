#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: the numbers to expect from the malloc
 * Return: returns a pointer to the base address of
 * the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pter = malloc(b);

	if (pter == NULL)
		exit(98);

	return (pter);
}
