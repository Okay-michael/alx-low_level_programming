#include <stdio.h>
#include "main.h"

/**
 * main - this function prints all the arguments passed
 * @argc: the number of commandline arguments
 * @argv: a pointer to the array of arguments
 * Return: this function returns 0 if it is successful
 * otherwise it returns any other integer
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
