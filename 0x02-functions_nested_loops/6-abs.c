#include "main.h"

/**
* _abs - gets the absolute value of an integer
* @val: the val to get its absolute
* Return: the absolute integer value
*/
int _abs(int val)
{
	int output;

	if (val < 0)
	{
		output = val * -1;
	}
	else
	{
		output = val;
	}
	return (output);
}
