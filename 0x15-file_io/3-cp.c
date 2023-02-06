#include "main.h"
/**
 * main- entry point function
 * @argc: argument count
 * @argv: terminal arguments passed
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
	int file_frm_FD, file_to_FD, check_read, check_write;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_frm_FD = open(argv[1], O_RDONLY);
	if (file_frm_FD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to_FD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_FD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((check_read = read(file_frm_FD, buff, 1024)) > 0)
	{
		check_write = write(file_to_FD, buff, check_read);
		if (check_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (check_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_frm_FD) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_frm_FD), exit(100);
	if (close(file_to_FD) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_FD), exit(100);
	return (0);
}
