#include "main.h"
/**
 * main - copies the contents of a file to another file
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: void
 */
int main(int argc, char **argv)
{
	char *buf;
	int fd1, fd2, rd = 1024, wr, clse1, clse2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 664);
	fd1 = open(argv[1], O_RDONLY);
	while (rd)
	{
		rd = read(fd1, buf, 1024);
		if (argv[1] == NULL || fd1 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fd2, buf, rd);
		if (argv[2] == NULL || wr == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	clse1 = close(fd1);
	clse2 = close(fd2);
	if (clse1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (clse2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	free(buf);
	return (0);
}
