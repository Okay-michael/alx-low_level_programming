#include "main.h"

/**
 * _strchr - this function searches for the firt occurrence of
 * a character in a provided string.
 * @s: a pointer (s) of char to search within
 * @c: this is the constant
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	}

	return (NULL);
}
