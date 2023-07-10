#include "main.h"
/**
 * append_text_to_file - to append file
 * @filename: file to append to
 * @text_content: content to append
 * Return: text append
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t text_length;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	text_length = strlen(text_content);
	bytesWritten = write(file, text_content, text_length);
	if (bytesWritten == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
