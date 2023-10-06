#include <stdio.h>

/**
 * main - Prints lowercase alphabet in descending order
 * Return: Exits program with 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
