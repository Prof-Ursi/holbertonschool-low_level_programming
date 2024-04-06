#include "main.h"

/**
 * close_file - return an error if closing the file causing one
 * @file_descriptor: the file descriptor of the closing file
 */
void close_file(int file_descriptor)
{
	if (close(file_descriptor) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * copy_file - program that copies the content of a file to another file
 * @source: name of the source file
 * @target: name of the target file
 */
void copy_file(const char *source, const char *target)
{
	int fd_source = 0, fd_target = 0;
	char buffer[1024];
	ssize_t bytes_read = 0, bytes_written = 0;

	fd_source = open(source, O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	fd_target = open(target, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
		close(fd_source);
		exit(99);
	}
	while ((bytes_read = read(fd_source, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_target, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			close(fd_source);
			close(fd_target);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		close(fd_source);
		close(fd_target);
		exit(98);
	}

	close_file(fd_source);
	close_file(fd_target);
}


/**
 * main - copies the contents of one file to another
 * Usage : cp file_from file_to
 *
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return:
 * - 0 on success
 * - 97 if the number of arguments is not the correct one
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
