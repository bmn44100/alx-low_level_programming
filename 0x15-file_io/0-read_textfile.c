#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: number of characters to be printed to stdout
 * Return: characters that were printed, or 0 if failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r;
	char *buf = NULL;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buf = malloc(letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);

	close(fd);

	if (r < 0 || write(STDOUT_FILENO, buf, r) != r)
	{
		free(buf);
		return (0);
	}

	free(buf);

	return (r);
}
