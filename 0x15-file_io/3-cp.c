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
	int fd, fd2, rd, wr, clse, clse2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fd = open(argv[1], O_RDONLY);
	rd = read(fd, buf, 1024);
	if (fd == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = write(fd2, buf, rd);
	if (wr == -1 || fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buf);
	clse = close(fd);
	clse2 = close(fd2);
	if (clse == -1 || clse2  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", clse || clse2);
		exit(100);
	}
	return (1);
}
