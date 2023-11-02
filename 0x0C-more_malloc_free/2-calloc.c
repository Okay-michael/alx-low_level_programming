#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: the number of elements
 * @size: the size of each array
 * Return:returns a pointer to the base address of the
 * newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pter;
	unsigned int k = 0;
	char *initial;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pter = malloc(nmemb * size);
	if (pter == NULL)
		return (NULL);
	initial = pter;
	for (; k < (nmemb * size); k++)
		*(initial + k) = '\0';
	return (pter);
}
