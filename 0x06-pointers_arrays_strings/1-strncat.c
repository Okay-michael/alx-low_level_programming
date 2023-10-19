#include "main.h"

_strlen(char *strng)
{
	int n = 0;

	while(strng[n])
		n++;
	return (n);
}
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int length = _strlen(dest) + _strlen(src) + 1;
	char *new = malloc(sizeof(char) * length);
	int k = 0;

	while(k < length)
	{
		if (k < _strlen(dest))
			new[k] = dest[k];
		else
			new[k] = src[k - _strlen(dest)];
		k++;
	}
	new[k] = '\0';
	return (char *new);
}
