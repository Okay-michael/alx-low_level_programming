#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: this is the passed string
 * Return: a pointer to the new string is returned
 */
char *_strdup(char *str)
{
	int pter;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while(str[i] != 0)
		i++;

	pter = malloc(sizeof(char) * (i + 1));
	if (pter == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		pter[i] = str[i];
	}
	return (pter);
}

