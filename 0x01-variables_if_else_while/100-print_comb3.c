#include <stdio.h>

/**
 * main - Prints different combinations of two base10 digits
 * Return: Exits program with 0 on success
 */
int main(void)
{
	int digit;
	int digit_1;

	for (digit = 0; digit <= 8; digit++)
	{
		for (digit_1 = digit + 1; digit_1 <= 9; digit_1++)
		{
			putchar('0' + digit);
			putchar('0' + digit_1);
			if (digit < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
