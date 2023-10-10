#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum_3, sum_5, t_sum;
	size_t j;

	sum_3 = 0;
	sum_5 = 0;
	t_sum = 0;

	for (j = 0; j < 1024; ++j)
	{
		if ((j % 3) == 0)
		{
			sum_3 += j;
		} else if ((j % 5) == 0)
		{
			sum_5 += j;
		}
	}
	t_sum = sum_3 + sum_5;
	printf("%lu\n", t_sum);
	return (0);
}
