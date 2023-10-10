i#include "main.h"

/**
* _isalpha - checks if a character is an alphabet
* @c: The character to check
*
* Return: returns 0 or 1
*/
int _isalpha(int c)
{
	int min_char = 65;
	int max_char = 122;
	int output;

	if (c >= min_char && c <= max_char)
	{
		if (c < 91 || c > 96)
		{
			output = 1;
		}
	}
	else
	{
		output = 0;
	}
	return (output);
}
