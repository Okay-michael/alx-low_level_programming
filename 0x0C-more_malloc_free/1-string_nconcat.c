#include "main.h"
#include <stdlib.h>
/**
 * _len - receives a string of characters as a parameter
 * @s: the string who's length is to be determined
 * Return: returns an integer value
 */
int _len(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	return (k);
}

/**
 * string_nconcat - concatenates up to the nth charater of the
 * second argument to the first
 * @s1: this is the first string passed
 * @s2: this is the second string passed
 * Return: returns a pointer to the resulting string after concatination
 * @n: the number of bytes to be counted from the second argument
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pter;
	unsigned int i = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = _len(s1);
	n += k;
	pter = malloc(n + 1);
	if (pter == NULL)
		return (NULL);
	for (; i < n; i++)
	{
		if (i < k)
			pter[i] = s1[i];
		else
			pter[i] = s2[i - k];
	}
	pter[i] = '\0';
	return (pter);
}
