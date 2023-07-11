#include "main.h"
/**
 * error_exit - display error
 * @message: do.kll
 * Return: VOID
 */
void error_exit(const char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}
/**
 * copy_file - FROM_TO TO FUNC
 * @file_from: surce whre to copy from
 * @file_to: buff to coppy to
 * Return: void funct
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file");


	fd_to = open(file_to, O_WRONLY | O_CREAT |
O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		error_exit("Error: Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit("Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd");
	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd");
}
/**
 * main - starting point
 * @argc: num of argurment
 * @argv: string of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}


	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}

