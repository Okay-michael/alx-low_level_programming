#include "main.h"

/**
 * _memcpy - it copies n bytes from memory area (src) to
 * memory area (dest)
 * @dest: the destinatio string
 * @src: the source string
 * @n: a parameter to measure the number of bytes to be copied
 * Return: the function returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
