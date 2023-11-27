#include "main.h"

int _strlen(char *str);

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the  file to be appended to.
 * @text_content: this is the data to append into the file.
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t letterCounts;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
 * _strlen - this function calculates the length of a
 * string
 * @str: this is the length whose length is to be calculated
 *
 * Return: it returns an integer representing the length of
 * a string
 */
int _strlen(char *str)
{
	int k = 0;

	while (str[k])
		k++;

	return (k);
}
