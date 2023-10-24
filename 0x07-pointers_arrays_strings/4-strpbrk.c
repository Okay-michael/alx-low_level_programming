#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: it accepts s as a string
 * @accept: accept is the string to be matched
 * Return: a pointer to the matching byte
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}

		return (0);
}
