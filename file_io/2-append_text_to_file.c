#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure or if the @filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0, bytes_written = 0, text_size = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_APPEND | O_WRONLY);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	else
	{
		while (text_content[text_size] != '\0')
			text_size++;
	}

	bytes_written = write(file_descriptor, text_content, text_size);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
