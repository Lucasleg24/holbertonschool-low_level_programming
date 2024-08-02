#include "main.h"

/**
 * read_textfile - read and write the text content
 * @filename: file
 * @letters: numbers of caracter print
 * Return: return the value number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int id;
	ssize_t bread;
	ssize_t bwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	id = open(filename, O_RDONLY);
	if (id == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(id);
		return (0);
	}
	bread = read(id, buffer, letters);
	if (bread == -1)
	{
		free(buffer);
		close(id);
		return (0);
	}
	bwrite = write(STDOUT_FILENO, buffer, bread);
	if (bwrite == -1 || bwrite != bread)
	{
		free(buffer);
		close(id);
		return (0);
	}
	free(buffer);
	close(id);
	return (bwrite);
}
