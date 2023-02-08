#include "main.h"

/**
 * _strlen - return length of the string
 * @str: pointer to a first element of str
 * Return: length of str
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to add at the end of the file
 * Return: Returns: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
