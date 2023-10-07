#include <stdio.h>

/**
 * main - this program declares and anitializes two integer variable
 * uses the for some mingling
 *
 * Return: return an integer vlue 0 when everything goes well
 */
int main(void)
{
	int nmb1, nmb2;

	for (nmb1 = 0; nmb1 <= 99; nmb1++)
	{
		for (nmb2 = nmb1; nmb2 <= 99; nmb++)
		{
			if (nmb1 != nmb2)
			{
				putchar('0' + nmb1 / 10);
				putchar('0' + nmb1 % 10);
				putchar(' ');
				putchar('0' + nmb2 / 10);
				putchar('0' + nmb2 % 10);
				if (nmb1 != 98 || nmb2 != 99)
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
