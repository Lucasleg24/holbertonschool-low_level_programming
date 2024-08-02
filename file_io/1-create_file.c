#include "main.h"

/**
 * create_file - create a new file
 * @filename: name of a new file
 * @text_content: content of a new file
 * Return: return value of lenght
 */

int create_file(const char *filename, char *text_content)
{
	int id;
	int bwrite;
	int lenght = 0;

	if (filename == NULL)
		return (0);
	id = open(filename, O_RDWR | O_TRUNC, 0600);
	if (id == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(id);
		return (1);
	}
	while (text_content[lenght] != '\0')
	{
		lenght++;
	}
	bwrite = write(id, text_content, lenght);
	if (bwrite == -1 || bwrite != lenght)
	{
		close(id);
		return (-1);
	}
	return (1);
}
