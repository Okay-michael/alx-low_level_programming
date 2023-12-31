#include "main.h"

/**
 * _strlen_recursion - this function mimicks the strlen in the
 * stdio.h and uses recursion to achieve this.
 * @s: it accepts a pointer to a string s
 * Return: the length of a string
 * as an integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
