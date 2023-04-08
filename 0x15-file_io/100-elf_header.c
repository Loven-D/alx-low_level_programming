#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - Displays the ELF header information of an ELF file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	/* Check usage */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	/* Open ELF file */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (98);
	}

	/* Read ELF header */
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	/* Check ELF magic number */
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}

	/* Display ELF header information */
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < SELFMAG; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
			header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			"Invalid ELF class");
	printf("  Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
			"Invalid ELF data encoding");
	printf("  Version:                           %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
	}
}
