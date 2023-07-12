#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#define ELF_MAGIC "x7fELF"

#include <string.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdint.h>
#include <sys/types.h>

/**
 * typedef struct - working or not
 * @ident: array
 * @type: type
 * @machine: machine
 * @version: version
 * @entry: entry
 * @phoff: phoff
 * @shoff: shoff
 * @flags: flags
 * @ehsize: size
 * @phentsize: phent
 * @phnum: num
 * @shnum: num-a
 * @shstrndx: rndx
 * @shentsize: shent
 */
typedef struct
{
	uint8_t ident[16];
	uint16_t type;
	uint16_t machine;
	uint32_t version;
	uint64_t entry;
	uint64_t phoff;
	uint64_t shoff;
	uint32_t flags;
	uint16_t ehsize;
	uint16_t phentsize;
	uint16_t phnum;
	uint16_t shentsize;
	uint16_t shnum;
	uint16_t shstrndx;
} Elf64_Ehdr;

/* fun for func */
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

/**
 * print_error - print error
 * @message: message
 * Return: void
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * print_elf_header - detail
 * @header: to struc
 * Return: void
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 4; ++i)
		printf("%02x ", header->ident[i]);
	printf("\n");

	printf("  Class:                             ");
	switch (header->ident[4])
	{
		case 1:
			printf("ELF32\n");
			break;
		case 2:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("  Data:                              ");
	switch (header->ident[5])
	{
		case 1:
			printf("2's complement, little endian\n");
			break;
		case 2:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("  Version:                           %d (current)\n",
			header->ident[6]);
	printf("  OS/ABI:                            ");
	switch (header->ident[7])
	{
		case 0:
			printf("System V\n");
			break;
		case 1:
			printf("HP-UX\n");
			break;
		case 2:
			printf("NetBSD\n");
			break;
		case 3:
			printf("Linux\n");
			break;
		case 6:
			printf("Solaris\n");
			break;
		case 7:
			printf("AIX\n");
			break;
		case 8:
			printf("IRIX\n");
			break;
		case 9:
			printf("FreeBSD\n");
			break;
		case 10:
			printf("Tru64\n");
			break;
		case 11:
			printf("Novell Modesto\n");
			break;
		case 12:
			printf("OpenBSD\n");
			break;
		case 13:
			printf("OpenVMS\n");
			break;
		case 14:
			printf("NonStop Kernel\n");
			break;
		case 15:
			printf("AROS\n");
			break;
		case 16:
			printf("Fenix OS\n");
			break;
		case 17:
			printf("CloudABI\n");
			break;
		case 18:
			printf("Stratus Technologies OpenVOS\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  ABI Version:                       %d\n", header->ident[8]);
	printf("  Type:                              ");
	switch (header->type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  Entry point address:               0x%lx\n", header->entry);
}
#endif
