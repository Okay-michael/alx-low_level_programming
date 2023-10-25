# include "main.h"

/**
 * is_prime_helper - checks if n is prime
 * @n: number is checked for primality
 * @div: this number derives from n and is used to
 * control the recursion
 * Return: this function returns 0 or 1
 */
int is_prime_helper(int n, int div)
{
	if (n <= 1)
		return (0);
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div - 1));
}

/**
 * is_prime_number - this function checks if a passed argument is
 * prime
 * @n: this is the number that is to be tested
 * Return: this function returns a boolean value 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}
