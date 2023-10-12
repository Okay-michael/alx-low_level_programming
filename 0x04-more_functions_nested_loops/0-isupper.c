#include "main.h"

/**
* _isupper - checks if a character is upper case
*
* @c: character that will be checked
*
* Return: 1 if true, 0 if false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
