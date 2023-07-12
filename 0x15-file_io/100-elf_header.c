#include "main.h"
/**
 * main - starting point
 * @argc: num of argv
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Failed to open the file");

	bytes_read = read(fd, &header, sizeof(header));

	if (bytes_read != sizeof(header))
		print_error("Failed to read the ELF header");

	if (memcmp(header.ident, ELF_MAGIC, sizeof(ELF_MAGIC) - 1) != 0)
		print_error("Not an ELF file");

	print_elf_header(&header);
	close(fd);

	return (0);
}
