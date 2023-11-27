#include "main.h"
/**
 * read_textfile - reads a text file & prints it to the POSIX stdout
 * @filename: the file to be read
 * @letters: the number of letters to read and write.
 * Return: it returns an integer representing the number of
 * characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t letterCounts;
	int file;

	if (!filename)
		return (0);
	txt = malloc(sizeof(char) * letters + 1);
	if (txt == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(txt);
		return (0);
	}
	letterCounts = read(file, txt, sizeof(char) * letters);
	if (letterCounts == -1)
	{
		free(txt);
		close(file);
		return (0);
	}
	letterCounts = write(STDOUT_FILENO, txt, letterCounts);
	if (letterCounts == -1)
	{
		free(txt);
		close(file);
		return (0);
	}
	free(txt);
	close(file);
	return (letterCounts);
}
