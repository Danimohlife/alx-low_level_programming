#include "main.h"
/**
 * create_file - to creat file
 * @filename: name of file to create
 * @text_content: terminated string to write to the file
 * Return: -1 / 0
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t text_length;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		bytesWritten = write(file, text_content, text_length);
		if (bytesWritten == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
