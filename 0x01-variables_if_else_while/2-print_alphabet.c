#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 * Return: Exits program with 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
