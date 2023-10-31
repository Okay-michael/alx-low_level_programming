#include "main.h"

/**
 * _strlen - computes the length of a string
 * @strng: this is the string passed
 * Return: returns the length of the string
 */
int _strlen(char *strng)
{
	size_t lnt = 0;

	if (strng == NULL)
		return (0);
	while (strng[lnt] != 0)
		lnt++;
	return (lnt);
}
/**
 * str_concat - concatinates two strings
 * @s1: one of the strings
 * @s2: the second string
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	char *pter;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = _strlen(s1) + _strlen(s2) + 1;
	pter = malloc(j * sizeof(char));
	if (pter == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		if (i < (size_t)_strlen(s1))
		{
			pter[i] = s1[i];
		}
		else
		{
			pter[i] = s2[i - _strlen(s1)];
		}
	}

	return (pter);
}
