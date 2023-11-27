#include "main.h"

int _strlen(char *s);

/**
 * create_file - creates a file
 * @filename: the name of the file to be create.
 * @text_content: hold the data to be written into the file.
 * Return: it returns 1 on success, -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t letterCounts;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		letterCounts = write(file, text_content, _strlen(text_content));
		if (letterCounts == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}

/**
 * _strlen - calculates the length of a string
 * @str: this is the input string
 *
 * Return: this funtion returns an integer representing the length
 * of the string.
 */
int _strlen(char *str)
{
	int k = 0;

	while (str[k])
	{
		k++;
	}
	return (k);
}
