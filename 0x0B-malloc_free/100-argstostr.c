#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns length of the string str
 * @str: pointer to a first element of the string str
 * Return: lenght of the string str
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of the arguments, passed to the program.
 * @av: arguments, passed to the program.
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int length = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		length += _strlen(av[i]);

	ar = malloc((length + ac) * sizeof(char) + 1);
	if (ar == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ar[k] = av[i][j];
			k++;
		}
		ar[k] = '\n';
		k++;
	}
	ar[k] = '\0';
	return (ar);
}
