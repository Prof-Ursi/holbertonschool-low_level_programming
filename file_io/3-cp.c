#include "main.h"

/**
 * main - copies the contents of one file to another 
 * Usage : cp file_from file_to
 *
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return:
 * - 0 on success
 * - 97 if the number of argument is not the correct one
 * - 98 if file_from does not exist, or if it can't be read
 * - 99 if creation of file_to failed or if write to file_to failed
 * - 100 if a file descriptor can't be closed
 */
int main(int argc, char *argv[])
{
	int fd_file_from = 0, fd_file_to = 0;
	char file_buffer[1024];
	ssize_t bytes_read = 0, bytes_written = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_file_from);
		exit(99);
	}

	while ((bytes_read = read(fd_file_from, file_buffer, sizeof(file_buffer))) > 0)
	{
		bytes_written = write(fd_file_to, file_buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_file_from);
			close(fd_file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_file_from);
		close(fd_file_to);
		exit(98);
	}
	if (close(fd_file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}
	if (close(fd_file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
		exit(100);
	}

	return (0);
}
