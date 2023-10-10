#include "main.h"

/**
* _islower - checks for lowercase character
* @c: The character to check
*
* Return: returns 0 or 1
*/
int _islower(int c)
{
	int min_char = 97;
	int max_char = 122;
	int output;

	if (c >= 97 && c <= 122)
		output = 1;
	else
		output = 0;
	return (output);
}
