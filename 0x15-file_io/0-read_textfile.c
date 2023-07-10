#include "main.h"
/**
 * read_textfile - read file function str
 * @filename: ptr to buffer
 * @letters: num of lettr
 * Return: str / c
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);

	return (bytesRead);
}
