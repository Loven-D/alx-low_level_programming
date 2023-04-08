#include "main.h"

/**
 * read_textfile - reads a text file and
 *	prints it to the POSIX standard output.
 * @filename: pointer to the name of the file to be read.
 * @letters: number of letters to read and print
 * Return: number of letters read and printed succefully.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	file_read = read(file, buffer, letters);
	if (file_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	buffer[file_read] = '\0';

	file_written = write(STDOUT_FILENO, buffer, file_read);
	if (file_write == -1 || (size_t)file_write != file_read)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);

	return (file_read);
}
