#include "main.h"

/**
 * _strlen - find length of string
 * @str: string to be evaluated
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be written into file
 * Return: 1 if success, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = _strlen(text_content);
	if (write(fd, text_content, len) < len)
		return (-1);

	close(fd);

	return (1);
}
