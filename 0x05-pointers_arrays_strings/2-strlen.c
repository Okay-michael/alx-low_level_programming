#include "main.h"

/**
* _strlen - Gets the length of a string
*
* @s: the string
*
* Return: integer value of the string length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}
