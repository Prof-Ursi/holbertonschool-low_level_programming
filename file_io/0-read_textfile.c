#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print,
 * or 0 if filename is NULL or if any error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = 0;
	char *file_buffer = NULL;
	ssize_t bytes_read = 0, bytes_written = 0;

	if (filename == NULL)
		return (0);

	file_buffer = malloc(sizeof(char) * letters);
	if (file_buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(file_buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, file_buffer, letters);
	if (bytes_read == -1)
	{
		free(file_buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, file_buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(file_buffer);
		close(file_descriptor);
		return (0);
	}

	free(file_buffer);
	close(file_descriptor);
	return (bytes_read);
}
