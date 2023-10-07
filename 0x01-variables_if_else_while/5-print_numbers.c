#include <stdio.h>

/**
 * main - Prints base10 single digits
 * Return: Exits program with 0 on success
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
