#include "main.h"

/**
 * binary_to_uint - converts from binary to unsigned int
 * @b: the binary value to be converted.
 *
 * Return: the converted unsigned integer value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Unsigned_int;
	int length, base_two;

	if (!b)
		return (0);

	Unsigned_int = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			Unsigned_int += base_two;
		}
	}

	return (Unsigned_int);
}
