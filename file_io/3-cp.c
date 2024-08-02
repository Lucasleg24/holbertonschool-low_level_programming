#include "main.h"

/**
 * error_check - function for print error
 * @code: code exit error
 * @message: message exit error
 * @file: name of the file
 */

void error_exit(int code, const char *message, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
 * main - function main for copy content from to to
 * @argc: number of arguments
 * @argv: list of argument
 * Return: return a 0 or exit if fail
 */

int main(int argc, char **argv)
{
	int from;
	int to;
	ssize_t bread;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	while ((bread = read(from, buffer, 1024)) > 0)
	{
		if (write(to, buffer, bread) != bread)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bread == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[1]);

	if (close(to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", argv[2]);

	return (0);
}
