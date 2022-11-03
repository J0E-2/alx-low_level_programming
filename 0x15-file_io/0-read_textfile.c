#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: file pointer
 * @letters: number of letters it should read and
 * print
 *
 * Return: actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, bytes = 0, nbytes = 0;
	char *buf;

	if (filename == NULL|| !letters)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	nbytes = read(fd, buf, letters);

	bytes = write(1, buf, nbytes);

	if (fd == -1 || bytes == -1 || nbytes == -1 || bytes != nbytes)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes);
}
