#include "main.h"
/**
 * read_textfile - reads a text file &  prints it to the POSIX STDOUT
 * @filename: the name of the file
 * @letters: is the number of letters it could read and print
 * Return: the actual number of letters if success else return 0
 * if the file can not be opened or read,
 * if the file name is NULL and if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open, fd_Write, fd_Read;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (-1);
	}
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
	{
		return (0);
	}
	fd_Read = read(fd_open, buff, letters);
	if (fd_Read == -1)
	{
		free(buff);
		return (0);
	}
	fd_Write = write(STDOUT_FILENO, buff, fd_Read);
	if (fd_Write == -1)
	{
		free(buff);
		return (0);
	}
	close(fd_open);

	free(buff);
	return (fd_Write);
}
