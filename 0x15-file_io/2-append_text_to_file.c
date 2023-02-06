#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 * Return: 1 on Success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd_open = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}

	fd_write = write(fd_open, text_content, i);
		if (fd_write == -1)
		{
			return (-1);
		}
	}
	close(fd_open);
	return (1);
}
