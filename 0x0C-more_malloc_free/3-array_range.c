#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers and fills them up serially
 * @min: integer argument
 * @max: also is an integer argument
 * Return: returns a pointer to the array
 */
int *array_range(int min, int max)
{
	int *pter, i;
	int length = (max - min + 1);

	if (min > max)
		return (NULL);
	pter = malloc(length * sizeof(int));
	if (pter == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		pter[i] = min++;
	return (pter);
}
