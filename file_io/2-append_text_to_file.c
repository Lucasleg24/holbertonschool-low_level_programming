#include "main.h"

/**
 * append_text_to_file - add text at the end of file
 * @filename: name of file
 * @text_content: content add at end of the file
 * Return: return 1 for success or -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int id;
	int add;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	id = open(filename, O_WRONLY | O_APPEND);
	if (id == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(id);
		return (1);
	}

	while (text_content[lenght] != '\0')
		lenght++;

	add = write(id, text_content, lenght);

	close(id);

	if (add == -1 || add != lenght)
		return (-1);

	return (1);
}
