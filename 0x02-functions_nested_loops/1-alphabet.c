#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return - returns nothing
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
