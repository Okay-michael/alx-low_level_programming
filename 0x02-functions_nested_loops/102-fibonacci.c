#include <stdio.h>

/**
 * main - this function prints the first 50 Fibonacci number
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, push;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		push = j + k;
		j = k;
		k = push;
	}
	return (0);
}
