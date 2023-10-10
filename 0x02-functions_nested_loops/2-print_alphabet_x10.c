#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets in ten lines
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
