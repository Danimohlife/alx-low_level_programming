#include "main.h"
/**
 * error_exit - message and exits the program with the specified code.
 * @message: The error message to print.
 * @code: The exit code.
 */
void error_exit(const char *message, int code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytesRead, bytesWritten;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to file", 99);
	}

	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit("Error: Can't write to file", 99);
		}
	}
	if (bytesRead == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit("Error: Can't read from file", 98);
	}

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", 100);
}

/**
 * main - entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
