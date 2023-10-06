#include <stdio.h>

/**
 * main - Prints base10 single digits
 * Return: Exits program with 0 on success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 16; digit++)
	{
		if  (digit < 10)
		{
			putchar('0' + digit);
		}
		else
		{
			putchar('a' + (digit - 10));
		}
	}
	putchar('\n');
	return (0);
}
