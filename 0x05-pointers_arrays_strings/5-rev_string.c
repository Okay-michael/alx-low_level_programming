#include "main.h"

/**
* rev_string - reverses a string
*
* @s: the string
*
* Return: void
*/
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	int j;
	int k;
	char *s1;
	
	while (s[length] != '\0')
	{
		length++;
	}
	for (j = length - 1; j >= 0; j--)
	{
		s1[j] = s[i];
		i++;
	}
	for (k = 0; k < length; k++)
	{
		s[k] = s1[k];
	}
}
