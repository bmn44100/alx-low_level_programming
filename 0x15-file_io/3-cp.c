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
 * _err - prints a message to stderr and exits the program
 * @i: error code
 * @fn: name of file that caused the error
 */
void _err(int i, char *fn)
{
	switch (i)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn);
		exit(98);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn);
		exit(99);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", fn);
		exit(100);
		break;
	default:
		break;
	}
}

/**
 * main - copied the content of a file to another file
 * @ac: number of elements input from command line
 * @av: elements from command line
 * Return: 0 (Always Success)
 */
int main(int ac, char **av)
{
	int fdFrom;
	int fdTo;
	int r;
	char buf[1024];
	char err_buf[] = " ";

	if (ac != 3)
		_err(97, NULL);
	fdFrom = open(av[1], O_RDONLY);

	if (fdFrom < 0)
		_err(98, av[1]);

	fdTo = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fdTo == -1)
		_err(99, av[2]);

	do {
		r = read(fdFrom, buf, 1024);
		if (r < 0)
			_err(98, av[1]);
		if (write(fdTo, buf, r) != r)
			_err(99, av[2]);
	} while (r == 1024);

	if (close(fdFrom) == -1)
	{
		*err_buf = fdFrom + '0';
		_err(100, err_buf);
	}

	if (close(fdTo) == -1)
	{
		*err_buf = fdTo + '0';
		_err(100, err_buf);
	}

	return (0);
}
