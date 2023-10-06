#include <stdio.h>

/**
 * main - Prints different combinations of three base10 digits
 * Return: Exits program with 0 on success
 */
int main(void)
{
	int digit;
	int digit_1;
	int digit_2;

	for (digit = 0; digit <= 7; digit++)
	{
		for (digit_1 = digit + 1; digit_1 <= 8; digit_1++)
		{
			for (digit_2 = digit_1 + 1; digit_2 <= 9; digit_2++)
			{
				putchar('0' + digit);
				putchar('0' + digit_1);
				putchar('0' + digit_2);
				if (digit < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
