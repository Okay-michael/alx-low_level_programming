#include "main.h"

/**
* _strcpy - copies a pointed string including \0
*
* @dest: the destination of the copied string
* @src: the string source to be copied
*
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
