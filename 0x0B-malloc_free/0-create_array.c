#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array and fills it with a constant byte
 * @size: this is the the number of bytes to be created
 * @c: this is the constant byte to fill the array with
 * Return: this function returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *pter = NULL;

	if (size <= 0)
		return NULL;

	pter = (char*)(malloc(size));
	for(; i < size;)
		pter[i] = c;
	return (pter);
}
