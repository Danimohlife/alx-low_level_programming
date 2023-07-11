#include "main.h"
/**
 * main - Starting point of the function
 * @argc: number of argument to main
 * @argv: Array of argument attarch to file during call
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, file_F = 0, file_T = 1024;
	char re_ad[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT |
O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH | S_IWGRP);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	while (file_T == 1024)
	{
		file_T = read(file_from, re_ad, 1024);
		if (file_T == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		file_F = write(file_to, re_ad, file_T);
		if (file_T > file_F)
		{
			dprintf(STDERR_FILENO, "Error: Can't  write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
