#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns length of the string str
 * @str: pointer to a first element of the string str
 *
 * Return: length of the string str
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer, to the first element of the string str
 *
 * Return: NULL, if str is NULL, otherwise pointer to a space in memory,
 * which contains a copy of the str
 */

char *_strdup(char *str)
{
	int i = 0;
	int size;
	char *str1;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);
	str1 = malloc((size + 1) * sizeof(char));

	if (str1 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		str1[i] = str[i];
	}
	str1[i] = '\0';
	return (str1);
}
