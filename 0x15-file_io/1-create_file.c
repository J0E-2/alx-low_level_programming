#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write
 * to the file
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> bd287b4fc4a4095b6709e971465e11376604743c
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, bytes = 0, len = 0;

	if (filename == NULL)
		return (-1);

<<<<<<< HEAD
	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);

	if (text_content != NULL)
	{
		bytes = write(fd, text_content, len);
	}

	if (fd == -1 || bytes == -1)
		return (-1);

=======
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	bytes = write(fd, text_content, len);

	if (fd == -1 || bytes == -1)
		return (-1);

	close(fd);
>>>>>>> bd287b4fc4a4095b6709e971465e11376604743c
	return (1);
}
