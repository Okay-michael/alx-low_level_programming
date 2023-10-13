#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0.
 */
int main(void)
{
	long nmb = 612852475143;
	long div = 2;
	long lrg_prime = 0;

	while (nmb != 1)
	{
		if (nmb % div == 0)
		{
			nmb = nmb / div;
			lrg_prime = div;
		}
		div++;
	}
	printf("%ld\n", lrg_prime);
	return (0);
}
